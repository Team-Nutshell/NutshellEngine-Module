#pragma once
#include <iostream>
#include <string>

#if defined(NTSHENGN_CURRENT_MODULE_GRAPHICS)
	#define NTSHENGN_MODULE_MESSAGE_PREFIX std::string("\33[1m\33[92mGRAPHICS ")
#elif defined(NTSHENGN_CURRENT_MODULE_PHYSICS)
	#define NTSHENGN_MODULE_MESSAGE_PREFIX std::string("\33[1m\33[35mPHYSICS ")
#elif defined(NTSHENGN_CURRENT_MODULE_WINDOW)
	#define NTSHENGN_MODULE_MESSAGE_PREFIX std::string("\33[1m\33[93mWINDOW ")
#elif defined(NTSHENGN_CURRENT_MODULE_AUDIO)
	#define NTSHENGN_MODULE_MESSAGE_PREFIX std::string("\33[1m\33[34mAUDIO ")
#elif defined(NTSHENGN_CURRENT_MODULE_ASSET_LOADER)
	#define NTSHENGN_MODULE_MESSAGE_PREFIX std::string("\33[1m\33[36mASSET LOADER ")
#else
	#define NTSHENGN_MODULE_MESSAGE_PREFIX std::string("\33[1mUNKNOWN ")
#endif

#define NTSHENGN_MODULE_INFO(message) \
	do { \
		std::cout << NTSHENGN_MODULE_MESSAGE_PREFIX + "\33[39mMODULE \33[34mINFO\33[39m\33[0m: " + std::string(message) << std::endl; \
	} while(0)

#define NTSHENGN_MODULE_WARNING(message) \
	do { \
		std::cout << NTSHENGN_MODULE_MESSAGE_PREFIX + "\33[39mMODULE \33[93mWARNING\33[39m\33[0m: " + std::string(message) << std::endl; \
	} while(0)

#define NTSHENGN_MODULE_ERROR(message) \
	do { \
		std::cout << NTSHENGN_MODULE_MESSAGE_PREFIX + "\33[39mMODULE \33[31mERROR\33[39m\33[0m: " + std::string(message) << std::endl; \
		exit(1); \
	} while(0)

#define NTSHENGN_MODULE_FUNCTION_NOT_IMPLEMENTED() \
	do { \
		std::cout << NTSHENGN_MODULE_MESSAGE_PREFIX + "\33[39mMODULE\33[0m FUNCTION NOT IMPLEMENTED: " + std::string(__func__) << std::endl; \
	} while(0)
