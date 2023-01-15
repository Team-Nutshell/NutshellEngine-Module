#pragma once

#if defined(NTSHENGN_OS_WINDOWS)
#if defined(NutshellEngineModule_EXPORTS)
#define NTSHENGN_MODULE_API __declspec(dllexport)
#else
#define NTSHENGN_MODULE_API __declspec(dllimport)
#endif
#else
#define NTSHENGN_MODULE_API
#endif