
#include "json_writer.h"
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;

std::string generateJson(const SystemStats& sys, const DockerStats& docker) {
    json j;
    j["cpu_usage"] = sys.cpuUsage;
    j["mem_total_kb"] = sys.memTotal;
    j["mem_free_kb"] = sys.memFree;
    j["containers_running"] = docker.runningContainers;
    return j.dump(4);
}

void saveJsonToFile(const std::string& jsonStr, const std::string& path) {
    std::ofstream out(path);
    out << jsonStr;
}
