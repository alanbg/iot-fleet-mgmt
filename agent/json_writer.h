
#pragma once
#include <string>
#include "system_monitor.h"
#include "docker_monitor.h"

std::string generateJson(const SystemStats& sys, const DockerStats& docker);
void saveJsonToFile(const std::string& json, const std::string& path);
