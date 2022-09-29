#include "ntsh_module.h"
#include "utils/ntsh_module_defines.h"
#include "../external/Common/ntsh_engine_enums.h"

void NutshellModule::init() {
    NTSH_MODULE_ERROR("init() function not implemented.", NTSH_RESULT_UNKNOWN_ERROR);
}

void NutshellModule::update(double dt) {
    NTSH_UNUSED(dt);
    NTSH_MODULE_ERROR("update() function not implemented.", NTSH_RESULT_UNKNOWN_ERROR);
}

void NutshellModule::destroy() {
    NTSH_MODULE_ERROR("destroy() function not implemented.", NTSH_RESULT_UNKNOWN_ERROR);
}

std::string NutshellModule::getName() {
    NTSH_MODULE_ERROR("getString() function not implemented.", NTSH_RESULT_UNKNOWN_ERROR);
}