#pragma once
#include <iostream>

#ifdef NTSH_CURRENT_MODULE_GRAPHICS
	#define NTSH_MODULE_MESSAGE_PREFIX "\33[1m\33[92mGRAPHICS "
#elif NTSH_CURRENT_MODULE_PHYSICS
	#define NTSH_MODULE_MESSAGE_PREFIX "\33[1m\33[35mPHYSICS "
#elif NTSH_CURRENT_MODULE_WINDOW
	#define NTSH_MODULE_MESSAGE_PREFIX "\33[1m\33[93mWINDOW "
#elif NTSH_CURRENT_MODULE_AUDIO
	#define NTSH_MODULE_MESSAGE_PREFIX "\33[1m\33[34mAUDIO "
#else
	#define NTSH_MODULE_MESSAGE_PREFIX  "\33[1mUNKNOWN "
#endif

#ifdef NTSH_DEBUG
#define NTSH_MODULE_INFO(message) \
	do { \
		std::cerr << NTSH_MODULE_MESSAGE_PREFIX << "\33[39mMODULE \33[34mINFO\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_MODULE_INFO(message) \
	do { \
	} while(0)
#endif

#ifdef NTSH_DEBUG
#define NTSH_MODULE_WARNING(message) \
	do { \
		std::cerr << NTSH_MODULE_MESSAGE_PREFIX << "\33[39mMODULE \33[93mWARNING\33[39m\33[0m: " << message << std::endl; \
	} while(0)
#else
#define NTSH_MODULE_WARNING(message) \
	do { \
	} while(0)
#endif

#ifdef NTSH_DEBUG
#define NTSH_MODULE_ERROR(message, code) \
	do { \
		std::cerr << NTSH_MODULE_MESSAGE_PREFIX << "\33[39mMODULE \33[31mERROR\33[39m\33[0m: " << message << std::endl; \
		exit(code); \
	} while(0)
#else
#define NTSH_MODULE_ERROR(message, code) \
	do { \
		exit(code); \
	} while(0)
#endif

#ifdef NTSH_DEBUG
#define NTSH_MODULE_FUNCTION_NOT_IMPLEMENTED() \
	do { \
		std::cerr << NTSH_MODULE_MESSAGE_PREFIX << "\33[39mMODULE\33[0m FUNCTION NOT IMPLEMENTED: " << __func__ << std::endl; \
	} while(0)
#else
#define NTSH_MODULE_FUNCTION_NOT_IMPLEMENTED() \
	do { \
	} while(0)
#endif
