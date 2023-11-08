#pragma once

#include <sys/types.h>
#include <string>
#include <ctime>

class util
{
public:

	static uint64_t GetCurrentMs();
	static uint64_t GetCurrentUs();

	static std::string ToUpper(const std::string& name);
	static std::string ToLower(const std::string& name);

	static void sleep(int64_t ms);
	static void usleep(int64_t us);
	static std::string TimeToStr(time_t ts = time(0), const std::string& format = "%Y-%m-%d %H:%M:%S");
	
};

