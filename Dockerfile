
FROM gcc:latest


COPY . /usr/src/myapp
WORKDIR /usr/src/myapp


RUN g++ -o myapp main.c


CMD ["./myapp"]

