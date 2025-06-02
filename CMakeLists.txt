
cmake_minimum_required(VERSION 3.10)
project(iot_agent)

set(CMAKE_CXX_STANDARD 17)

add_executable(iot-agent
    agent/main.cpp
    agent/system_monitor.cpp
    agent/docker_monitor.cpp
    agent/json_writer.cpp
)

target_include_directories(iot-agent PRIVATE agent)

# Use nlohmann/json if available
find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(iot-agent PRIVATE nlohmann_json::nlohmann_json)
