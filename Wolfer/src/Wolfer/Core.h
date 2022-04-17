#pragma once

#ifdef WF_PLATFORM_WINDOWS
	#ifdef WF_BUILD_DLL
		#define WOLFER_API __declspec(dllexport)
	#else
		#define WOLFER_API __declspec(dllimport)
	#endif
#else
	#error Wolferonly support Windows;
	
#endif