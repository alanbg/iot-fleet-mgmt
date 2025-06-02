
#include "docker_monitor.h"
#include <cstdlib>
#include <cstdio>

DockerStats getDockerStats() {
    DockerStats stats{};
    FILE* pipe = popen("docker ps -q | wc -l", "r");
    if (pipe) {
        fscanf(pipe, "%d", &stats.runningContainers);
        pclose(pipe);
    } else {
        stats.runningContainers = -1;
    }
    return stats;
}
