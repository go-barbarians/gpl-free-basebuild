FROM scratch

ADD target/sysroot /

RUN rm /usr/5bin/expr
RUN rm /usr/5bin/bc
RUN rm /usr/5bin/posix2001/expr
RUN rm /usr/5bin/s42/expr
RUN rm /usr/share/man/5man/man1/expr.1
RUN rm /usr/share/man/5man/man1/bc.1
RUN rm /usr/5bin/posix/expr
RUN chmod 777 /tmp
