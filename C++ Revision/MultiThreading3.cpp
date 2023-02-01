//
// Created by Monika Shaw on 01-02-2023.
//
#include <iostream>
#include <thread>

auto foo = [](int z)
{
    for (int i = 0; i < z; i++)
        std::cout << "Thread using lambda expression as callable\n";
};

int main()
{
    std::thread th(foo,4);
}