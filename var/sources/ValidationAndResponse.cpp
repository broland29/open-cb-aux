#include "..\headers\ValidationAndResponse.h"


void ValidationAndResponse::test()
{
	std::cout << "Hello from ValidationAndResponse!" << std::endl;
	spdlog::set_level(spdlog::level::trace);  // need on top of macro defined in header
	SPDLOG_TRACE("Hello again, from ValidationAndResponse!");
}

