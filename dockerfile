FROM gcc:latest
COPY .  /usr/src/cpp-tetris
WORKDIR /usr/src/cpp-tetris
RUN g++ -o Main main.cpp
CMD ["./Main"]