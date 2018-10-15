//
#include <iostream>
#include <sstream>
//
#include "Utility.hpp"

int main(int argc, char* argv[]) {
	//std::ostringstream oStr;
        std::string lName;
	if (argc > 1) {
	    lName= argv[1];
        } else {
	  lName = "World";
	}
	const std::string& lAnnounce = Utility::display_hello (lName);
	std::cout << lAnnounce << std::endl;
	return 0;
}

