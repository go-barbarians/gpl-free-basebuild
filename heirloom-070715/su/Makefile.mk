all: config.h su su.dfl

su: su.o
	$(LD) $(LDFLAGS) su.o $(LCRYPT) $(LCOMMON) $(LIBS) -o su

su.o: su.c config.h
	$(CC) $(CFLAGS) $(CPPFLAGS) $(GNUFL) -DSUDFL='"$(DFLDIR)/su"' -c su.c

su_pam: su_pam.o
	$(LD) $(LDFLAGS) su_pam.o -lpam $(LCOMMON) $(LIBS) -o su_pam

su_pam.o: su.c config.h
	$(CC) $(CFLAGS) $(CPPFLAGS) -DPAM $(GNUFL) -DSUDFL='"$(DFLDIR)/su"' -c su.c -o su_pam.o

su.dfl: su.dfl.in
	<su.dfl.in >su.dfl sed 's,@SULOG@,$(SULOG),g'

install: all
#	$(UCBINST) -c -m 4755 su $(ROOT)$(DEFBIN)/su
	$(UCBINST) -c -m 4755 su $(ROOT)$(DEFBIN)/su
	$(STRIP) $(ROOT)$(DEFBIN)/su
	test -r $(ROOT)$(DFLDIR)/su || $(UCBINST) -c -m 644 su.dfl $(ROOT)$(DFLDIR)/su
	$(MANINST) -c -m 644 su.1 $(ROOT)$(MANDIR)/man1/su.1
	test -d `dirname $(ROOT)$(SULOG)` || mkdir -p `dirname $(ROOT)$(SULOG)`
	-test -r $(ROOT)$(SULOG) || { \
		touch $(ROOT)$(SULOG); \
		chmod 600 $(ROOT)$(SULOG); \
	}

clean:
	rm -f config.h su su.o su_pam su_pam.o su.dfl core log *~

config.h:
	-echo '/*       Auto-generated by make. Do no edit!     */' >config.h
	-echo '#include <shadow.h>' >___build$$$$.c ; \
	echo 'int main(void) { getspent(); return 0; }' >>___build$$$$.c ; \
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LARGEF) $(IWCHAR) -o ___build$$$$ ___build$$$$.c >/dev/null 2>&1 ; \
	if test $$? = 0 && test -f ___build$$$$ ; \
	then    echo '#define SHADOW_PWD' >>config.h ; \
	fi ; \
	rm -f ___build$$$$ ___build$$$$.c
