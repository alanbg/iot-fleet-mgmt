
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "system_monitor.h"
#include "json_writer.h"

int main() {
    SystemStats sysStats = getSystemStats();
    std::string json = generateJson(sysStats);

    std::cout << json << std::endl;

    std::ofstream out("/host/status.json",  std::ios::trunc);
    if (!out) {
        std::cerr << "Failed to open /host/status.json for writing: " << strerror(errno) << std::endl;
        return 1;
}
    out << json;
    out.close();

    std::cout << "Status written to: /host/status.json\n";
    return 0;
}
