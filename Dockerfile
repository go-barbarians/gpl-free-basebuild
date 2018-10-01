FROM scratch

ADD target/sysroot /
RUN mkdir -p /tmp
RUN chmod 777 /tmp
