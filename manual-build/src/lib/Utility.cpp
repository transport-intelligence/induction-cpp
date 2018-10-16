//
#include <iostream>
#include <sstream>
//
#include <hello/Utility.hpp>

std::string Utility::display_hello (const std::string& iName) {
	std::ostringstream oStr;
       	oStr << "Hello " << iName << "!";
	return oStr.str();
}

