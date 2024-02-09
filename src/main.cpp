#include <iostream>

#include "registry.h"


int main() {
	std::cout << "\tTASK 33.3 DATA REGISTER\n\n";

    Registry<int, std::string> registry;

    registry.add(1, "One");
    registry.add(2, "Two");
    registry.add(3, "Three");

    std::cout << "Registry content:\n";
    registry.print();

    registry.find(2);

    registry.remove(1);

    std::cout << "\nRegistry content after removal:\n";
    registry.print();

    registry.remove(5);

	return 0;
}