#include <cstdlib>
#include <iostream>
#include <ut-test/test.h>


int main(int argc, char *argv[]) {
	std::cout << "Welcome to the Momentics IDE" << std::endl;

	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();

	return EXIT_SUCCESS;
}
