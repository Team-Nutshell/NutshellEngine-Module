#pragma once
#include "ntsh_module_interface.h"
#include "../external/Common/ntsh_module_interface.h"

class NutshellModule : public NutshellModuleInterface {
public:
    NutshellModule() : NutshellModuleInterface("NutshellModule") {}

    void init();
    void update(double dt);
    void destroy();
};