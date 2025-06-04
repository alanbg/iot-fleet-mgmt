
#include "json_writer.h"
#include <nlohmann/json.hpp>

using json = nlohmann::json;

std::string generateJson(const SystemStats& sys) {
    json j;
    j["cpu_usage"] = sys.cpuUsage;
    j["mem_total_kb"] = sys.memTotal;
    j["mem_free_kb"] = sys.memFree;
    return j.dump(4);
}
