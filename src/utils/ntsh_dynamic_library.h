#pragma once

#ifdef _WIN32
#ifdef NutshellModule_EXPORTS
#define NTSH_MODULE_API __declspec(dllexport)
#else
#define NTSH_MODULE_API __declspec(dllimport)
#endif
#elif
#define NTSH_MODULE_API
#endif