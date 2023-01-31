//
// Created by Monika Shaw on 31-01-2023.
//
#include <iostream>

class Add
{
public:
    int operator()(int a, int b)
    {
        return a+b;
    }
};

int main()
{
    Add add;
    int sum = add(1,2);
    std::cout << "sum : " << sum ;
}