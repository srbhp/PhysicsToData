FROM opensuse/leap:15.6
RUN zypper update -y
RUN zypper install -y --force wget tar
RUN zypper install -y --force -t pattern kde kde_plasma 
RUN zypper install -y --force tigervnc xorg-x11-Xvnc
RUN zypper install -y --force xrdp

EXPOSE 5901

# RUN wget -qO- https://github.com/TigerVNC/tigervnc/archive/refs/tags/v1.13.1.tar.gz | tar xz --strip 1 -C /
# RUN mkdir ~/.vnc
# RUN echo "123456" | vncpasswd -f >> ~/.vnc/passwd
# RUN chmod 600 ~/.vnc/passwd
#
#
# CMD ["/usr/bin/vncserver", "-fg"]
# CMD service dbus start ; service start xrdp; bash 
CMD bash 
