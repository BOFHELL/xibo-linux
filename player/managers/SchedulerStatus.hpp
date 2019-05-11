#pragma once

#include <iostream>
#include <vector>

struct SchedulerStatus
{
    std::vector<int> scheduledLayouts;
    std::vector<int> validLayouts;
    std::vector<int> invalidLayouts;
    int currentLayout;
    std::string generatedTime;
};
