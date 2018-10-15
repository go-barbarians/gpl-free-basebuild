FROM scratch

ENV TERMINFO=/usr/share/terminfo \
    VIMRUNTIME=/usr/share/vim/vim81

ADD target/sysroot /
RUN mkdir -p /tmp
RUN chmod 777 /tmp

RUN mkdir -p /etc/profile.d
RUN echo "export LANG=C.UTF-8" > /etc/profile.d/locale.sh

RUN mkdir -p /root
RUN echo "set backspace=indent,eol,start" > /root/.vimrc
RUN echo "set number" >> /root/.vimrc
RUN echo "syntax on" >> /root/.vimrc

RUN chmod 655 /etc/passwd
RUN chmod 600 /etc/shadow
