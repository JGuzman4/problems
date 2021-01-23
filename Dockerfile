FROM centos:centos8

RUN yum update -y && \
    yum groupinstall "Development Tools" -y

WORKDIR /app

COPY euler euler
COPY hackerRank hackerRank
