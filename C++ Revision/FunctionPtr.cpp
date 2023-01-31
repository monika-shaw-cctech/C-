//
// Created by Monika Shaw on 31-01-2023.
//
#include <iostream>

int add(int a, int b)
{
    return a+b;
}
int main()
{
    int (*funPtr)(int,int);
    funPtr = add;
    int sum = funPtr(10,20);
    std::cout << "sum is : " << sum;
    return 0;
}