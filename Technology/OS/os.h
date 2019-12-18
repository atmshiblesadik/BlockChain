#pragma once
#ifndef OS_H
#define OS_H

#ifdef _WIN64
	#define operating_system "win64"
#elif _WIN32
	#define operating_system "win32"
#elif __APPLE__
	#define operating_system "apple"
#elif __linux__
	#define operating_system "linux"
#elif __unix__
	#define operating_system "unix"
#else
	#define operating_system "-1"
#endif

#endif