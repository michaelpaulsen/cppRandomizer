// Ranom1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "RANDOM.cpp"
#include <chrono>

int main()
{
    long float r = Random::rand(10.0f, 10);
    Random::setSeed();
    for (int x = 0; x <= 10; x++) {
        long float rand = Random::rand(10, r, r * r); 
        if (rand > 0) {
            std::printf("0%f :: %E", rand, rand);
        }
        else {
            std::printf( "%f :: %E",rand,rand); 
        }
        if (rand <= 8 && rand >= 4) { 
            std::printf("::true");
        }
        printf("\n");
    }
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
