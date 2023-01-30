//
// Created by Monika Shaw on 30-01-2023.
//
#include <iostream>

int main() {
    int* mem = new int;
    *mem = 20;
    std::cout << "Memory Allocated : "<< *mem;
    delete mem;

    std::cout <<"\nGarbage Value : " << *mem;
    mem = NULL;

}