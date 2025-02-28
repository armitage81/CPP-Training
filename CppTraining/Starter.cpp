//Starter to choose which application to start

#include <iostream>
#include "Definitions.h"

int main()
{

    int number{ -1 };

    while (number != 0) {

        std::cout << "Enter number of the application to run or 0 to exit" << std::endl;



        std::cin >> number;

        switch (number) {
        case 1:
            helloWorld();
            break;
        case 2:
            initializer();
            break;
        default:
            break;
        }

    }
}