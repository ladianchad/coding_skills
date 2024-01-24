FROM ubuntu:latest

RUN apt update && \
 apt upgrade -y && \
 apt install build-essential cmake python3 dh-python dh-make python3-stdeb git -y && \
 mkdir /example
WORKDIR /example

COPY . /example
