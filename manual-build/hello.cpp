//
#include <iostream>
#include <sstream>

int main(int argc, char* argv[]) {
	std::ostringstream oStr;
        oStr << "Hello ";
	if (argc >= 1) {
	    oStr << argv[1];
        } else {
	  oStr << "World";
	}
        oStr << "!" << std::endl;
	std::cout << oStr.str() << std::endl;
	return 0;
}

