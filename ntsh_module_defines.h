#pragma once
#include <iostream>

#ifndef NDEBUG
#define NTSH_MODULE_INFO(message) \
	do { \
		std::cerr << "\33[1m\33[39mMODULE \33[34mINFO\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_MODULE_INFO(message) \
	do { \
	} while(0)
#endif

#ifndef NDEBUG
#define NTSH_MODULE_WARNING(message) \
	do { \
		std::cerr << "\33[1m\33[39mMODULE \33[93mWARNING\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_MODULE_WARNING(message) \
	do { \
	} while(0)
#endif

#ifndef NDEBUG
#define NTSH_MODULE_ERROR(message, code) \
	do { \
		std::cerr << "\33[1m\33[39mMODULE \33[31mERROR\33[39m\33[0m: " << message << std::endl; \
		exit(code); \
	} while(0)
#else
#define NTSH_MODULE_ERROR(message, code) \
	do { \
		exit(code); \
	} while(0)
#endif