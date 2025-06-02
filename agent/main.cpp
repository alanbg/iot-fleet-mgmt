
#include <iostream>
#include <fstream>
#include <string>
#include "system_monitor.h"
#include "docker_monitor.h"
#include "json_writer.h"

int main() {
    SystemStats sysStats = getSystemStats();
    DockerStats dockerStats = getDockerStats();

    std::string json = generateJson(sysStats, dockerStats);

    std::ofstream out("/tmp/status.json"); // Use /tmp for testing
    out << json;
    out.close();

    std::cout << "Status written to /tmp/status.json\n";
    return 0;
}
