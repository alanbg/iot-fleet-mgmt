
#pragma once
#include <string>

struct SystemStats {
    double cpuUsage;
    long memTotal;
    long memFree;
};

SystemStats getSystemStats();
