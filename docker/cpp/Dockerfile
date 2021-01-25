FROM centos:centos8

RUN yum update -y && \
    yum groupinstall -y "Development Tools" && \
    yum install -y yum-utils boost-devel
RUN dnf install gmp-devel -y && \
    dnf install boost -y

WORKDIR /app

COPY ../../euler euler
COPY ../../hackerRank hackerRank
COPY ../../Makefile Makefile
