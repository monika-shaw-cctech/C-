//
// Created by Monika Shaw on 31-01-2023.
//

#include <iostream>

int main()
{
    auto greet = [] ()
    {
        std::cout << "Hello";
    };
    greet();
    return 0;
}