#pragma once
#include <iostream>

#ifndef NDEBUG
#define NTSH_MODULE_INFO(message) \
	do { \
#ifdef NTSH_CURRENT_MODULE_GRAPHICS
		std::cerr << "\33[1m\33[92mGRAPHICS ";
#elif NTSH_CURRENT_MODULE_PHYSICS
		std::cerr << "\33[1m\33[35mPHYSICS ";
#elif NTSH_CURRENT_MODULE_WINDOW
		std::cerr << "\33[1m\33[93mWINDOW ";
#elif NTSH_CURRENT_MODULE_AUDIO
		std::cerr << "\33[1m\33[34mAUDIO ";
#else
		std::cerr << "\33[1mUNKNOWN ";
#endif
		std::cerr << "\33[39mMODULE \33[34mINFO\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_MODULE_INFO(message) \
	do { \
	} while(0)
#endif

#ifndef NDEBUG
#define NTSH_MODULE_WARNING(message) \
	do { \
#ifdef NTSH_CURRENT_MODULE_GRAPHICS
		std::cerr << "\33[1m\33[92mGRAPHICS ";
#elif NTSH_CURRENT_MODULE_PHYSICS
		std::cerr << "\33[1m\33[35mPHYSICS ";
#elif NTSH_CURRENT_MODULE_WINDOW
		std::cerr << "\33[1m\33[93mWINDOW ";
#elif NTSH_CURRENT_MODULE_AUDIO
		std::cerr << "\33[1m\33[34mAUDIO ";
#else
		std::cerr << "\33[1mUNKNOWN ";
#endif
		std::cerr << "\33[39mMODULE \33[93mWARNING\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_MODULE_WARNING(message) \
	do { \
	} while(0)
#endif

#ifndef NDEBUG
#define NTSH_MODULE_ERROR(message, code) \
	do { \
#ifdef NTSH_CURRENT_MODULE_GRAPHICS
		std::cerr << "\33[1m\33[92mGRAPHICS ";
#elif NTSH_CURRENT_MODULE_PHYSICS
		std::cerr << "\33[1m\33[35mPHYSICS ";
#elif NTSH_CURRENT_MODULE_WINDOW
		std::cerr << "\33[1m\33[93mWINDOW ";
#elif NTSH_CURRENT_MODULE_AUDIO
		std::cerr << "\33[1m\33[34mAUDIO ";
#else
		std::cerr << "\33[1mUNKNOWN ";
#endif
		std::cerr << "\33[39mMODULE \33[31mERROR\33[39m\33[0m: " << message << std::endl; \
		exit(code); \
	} while(0)
#else
#define NTSH_MODULE_ERROR(message, code) \
	do { \
		exit(code); \
	} while(0)
#endif