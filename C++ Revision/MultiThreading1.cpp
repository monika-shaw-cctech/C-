//
// Created by Monika Shaw on 01-02-2023.
//
//using function pointer

#include <iostream>
#include <thread>

void foo(int z)
{
    for (int i = 0; i < z; i++)
    {
        std::cout << "Thread using function pointer as callable\n";
    }
}
int main()
{
    std::thread th(foo,3);
}