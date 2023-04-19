#pragma once

#ifdef LS_PLATFORM_WINDOWS
	#ifdef LS_BUILD_DLL
		#define LOSER_API __declspec(dllexport)
	#else
		#define LOSER_API __declspec(dllimport)
	#endif 
#else
	#error Loser only support Windows!
#endif 
