#pragma once
#include <iostream>
#include <map>

namespace fw {
	
	extern std::string conv(System::String^);
	extern System::String^ conv(std::string);
	extern std::map<std::string, std::string> read(const char* path);
	extern void upt(const char* path, std::map<std::string, std::string>);
	extern bool ex(std::string);
}