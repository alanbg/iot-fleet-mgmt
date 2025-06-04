
#pragma once

struct SystemStats {
    double cpuUsage;
    long memTotal;
    long memFree;
};

SystemStats getSystemStats();
