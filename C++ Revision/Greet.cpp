//
// Created by Monika Shaw on 31-01-2023.
//
#include <iostream>

class Greet
{
    public:void operator()()
    {
        std::cout << "Hello world";
    }
};

int main()
{
    Greet greet;
    greet();
}