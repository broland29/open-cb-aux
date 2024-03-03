#pragma once

#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TRACE  // needed for macro usage, before spdlog.h! 

#include <iostream>
#include <spdlog/spdlog.h>


class ValidationAndResponse
{
public:
	void test();
};