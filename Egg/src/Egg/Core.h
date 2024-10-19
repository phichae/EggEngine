#pragma once

#ifdef EG_PLATFORM_WINDOWS
	#ifdef EG_BUILD_DLL
		#define EGG_API __declspec(dllexport)
	#else
		#define EGG_API __declspec(dllimport)
	#endif
#else
	#error Egg only supports Windows!
#endif