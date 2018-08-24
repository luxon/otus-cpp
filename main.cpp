#include "lib.h"

#include <iostream>

int main (int argc, char *argv[])
{
	static_assert(true);

	std::cout << "Version = " << version() << std::endl;

    return 0;
}
