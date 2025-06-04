
FROM fedora:latest

RUN dnf install -y gcc-c++ cmake make nlohmann-json-devel

WORKDIR /app
COPY . /app

RUN mkdir build && cd build && cmake .. && make

CMD ["./build/iot-agent"]
