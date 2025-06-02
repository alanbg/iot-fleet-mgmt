
#pragma once
#include <string>

struct DockerStats {
    int runningContainers;
};

DockerStats getDockerStats();
