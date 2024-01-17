FROM ubuntu:latest

RUN apt update && \
 apt upgrade -y && \
 apt install build-essential cmake python3 dh-python dh-make python3-stdeb -y

COPY . /example
WORKDIR /example
