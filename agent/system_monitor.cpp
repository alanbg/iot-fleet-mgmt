
#include "system_monitor.h"
#include <fstream>
#include <string>
#include <sstream>
#include <unistd.h>

SystemStats getSystemStats() {
    SystemStats stats{};

    // Simple memory usage from /proc/meminfo
    std::ifstream meminfo("/proc/meminfo");
    std::string key;
    long value;
    std::string unit;
    while (meminfo >> key >> value >> unit) {
        if (key == "MemTotal:") stats.memTotal = value;
        else if (key == "MemFree:") stats.memFree = value;
    }

    stats.cpuUsage = 0.0; // Placeholder
    return stats;
}
