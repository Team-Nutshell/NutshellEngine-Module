#pragma once

#if defined(NTSH_OS_WINDOWS)
#if defined(NutshellModule_EXPORTS)
#define NTSH_MODULE_API __declspec(dllexport)
#else
#define NTSH_MODULE_API __declspec(dllimport)
#endif
#else
#define NTSH_MODULE_API
#endif