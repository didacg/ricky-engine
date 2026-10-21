#pragma once

#ifdef RK_PLATFORM_WINDOWS
	#ifdef RK_BUILD_DLL
		#define RICKY_API __declspec(dllexport)
	#else
		#define RICKY_API __declspec(dllimport)
	#endif
#else
	#error RickyEngine for now only supports Windows!
#endif