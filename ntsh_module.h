#pragma once
#include "external/Common/ntsh_module_interface.h"

class NutshellModule : public NutshellModuleInterface {
public:
    NutshellModule() : NutshellModuleInterface(NTSH_MODULE_UNKNOWN, "NutshellModule") {}

    void init() {
        NTSH_MODULE_WARNING("init() function not implemented.");
    }

    void update(double dt) {
        NTSH_MODULE_WARNING("update() function not implemented.");
    }

    void destroy() {
        NTSH_MODULE_WARNING("destroy() function not implemented.");
    }
};