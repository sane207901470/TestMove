#pragma once
#include <stdio.h>

#include <string.h> //strrchr()函数所需头文件
#ifdef _WIN32
#define filename(x) strrchr(x,'\\')?strrchr(x,'\\')+1:x
#else _linux_
#define filename(x) strrchr(x,'/')?strrchr(x,'/')+1:x
#endif // WIN



#define DEBUG


#ifdef DEBUG

#define shuchu(fmt, ...) (printf("%s %s %s %s %d:"fmt, filename(__FILE__), __FUNCTION__, __DATE__, __TIME__, __LINE__, ##__VA_ARGS__),printf("\n"))

#else

#define printf_debug(fmt, ...)

#endif