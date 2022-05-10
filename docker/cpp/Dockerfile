FROM centos:centos8

RUN curl -O 'http://mirror.centos.org/centos/8-stream/BaseOS/x86_64/os/Packages/centos-gpg-keys-8-3.el8.noarch.rpm' && \
    rpm -i 'centos-gpg-keys-8-3.el8.noarch.rpm' && \
    dnf --disablerepo '*' --enablerepo=extras swap centos-linux-repos centos-stream-repos -y

RUN yum update -y && \
    yum groupinstall -y "Development Tools" && \
    yum install -y yum-utils boost-devel
RUN dnf install gmp-devel -y && \
    dnf install boost -y

WORKDIR /app

COPY euler euler
COPY hackerRank hackerRank
COPY Makefile Makefile
