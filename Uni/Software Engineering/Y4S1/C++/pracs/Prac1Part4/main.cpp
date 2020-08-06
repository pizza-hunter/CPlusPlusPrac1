#include <iostream>
#include <ctime>
#include <random>
#include <vector>

unsigned int getRandom();

int main()
{
    std::cout << "This program demonstrates C++ basic syntax" << std::endl;

    // TODO: implement according to the instructions
    std::cout << "Would you like to begin: (y/n)" << std::endl;
    std::string beginAnswer;
    std::cin >> beginAnswer;

    if(beginAnswer == "y"){



    }

    return 0;
}

/**
 * @brief getRandom answers a random number
 *
 * Abstracting out the use of the random generator a function makes it easier to
 * change the random number generator if necessary because there is only 1 location in
 * the code that is dependent on the random number generator implementation.
 *
 * @return a random integer
 */
unsigned int getRandom() {
    static std::mt19937 mtRand{uint32_t(time(nullptr))};
    return mtRand();
}
