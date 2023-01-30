//
// Created by Monika Shaw on 30-01-2023.
//
#include <iostream>

class A
{
private: int n1;

    friend class B;

public:A()
    {
        n1 = 10;
    }
};

class B
{
private: int n2;

public:  B()
    {
        n2 = 4;
    }

    int add()
    {
    A obj;
        return obj.n1 +n2;
    }
};
int main()
{
   B obj;
   std::cout << obj.add();
}