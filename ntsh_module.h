#pragma once
#include "ntsh_module_interface.h"
#include "../external/Common/ntsh_module_interface.h"

class NutshellModule : public NutshellModuleInterface {
public:
    NutshellModule() : NutshellModuleInterface(NTSH_MODULE_UNKNOWN, "NutshellModule") {}

    virtual void init() = 0;
    void update(double dt) = 0;
    void destroy() = 0;
};