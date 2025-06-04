
#include "system_monitor.h"
#include <fstream>
#include <string>
#include <unistd.h>

SystemStats getSystemStats() {
    SystemStats stats{};

    std::ifstream meminfo("/proc/meminfo");
    std::string key;
    long value;
    std::string unit;
    while (meminfo >> key >> value >> unit) {
        if (key == "MemTotal:") stats.memTotal = value;
        else if (key == "MemFree:") stats.memFree = value;
    }

    stats.cpuUsage = 0.0; // Placeholder for actual CPU usage
    return stats;
}
