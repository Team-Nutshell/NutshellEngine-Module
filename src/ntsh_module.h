#pragma once
#include "../external/Common/ecs.h"
#include "utils/ntsh_dynamic_library.h"
#include <string>

class NTSH_MODULE_API NutshellModule : public System {
private:

public:
    // Public API
    void init();
    void update(double dt);
    void destroy();

    std::string getName();
};