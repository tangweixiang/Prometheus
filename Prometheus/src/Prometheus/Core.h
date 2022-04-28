#pragma once

#ifdef PRO_PLATFORM_WINDOWS
	#ifdef PRO_BUILD_DLL
		#define PRO_API __declspec(dllexport)
	#else
		#define PRO_API __declspec(dllimport)
	#endif // PRO_BUILD_DLL
#else 
	#error Prometheus only for Windows!
#endif