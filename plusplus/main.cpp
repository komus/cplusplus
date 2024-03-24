//
//  main.cpp
//  Learn C++
//
//  Created by Oyindolapo Komolafe on 2024-03-09.
//
#include "calculator.h"
#include "constants.h"
#include <iostream>


int testingsomething(int x, int y); //forward declarations

void printSomething()
{
    std::cout << "Print something" << '\n';
}


int main()
{
    std::cout << "starting main" << '\n';
    int t =  add(20,30);
    std::cout << "sum of the numbers is " << t << '\n';
    
    std::cout << "Try prod " << product(10,15) << '\n';
    printSomething();

    std::cout << "Constants from file is " << constants::IOT_MULTI << "\n";
    return EXIT_SUCCESS;
}

int testingsomething(int x, int y)
{
    int sum {x + y}; // always use direct list initialization for variable assignment
  //  std::cout << sum << '\n';
    return sum;
}
