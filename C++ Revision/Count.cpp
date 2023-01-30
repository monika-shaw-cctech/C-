//
// Created by Monika Shaw on 30-01-2023.
//
#include <iostream>
#include <stdlib.h>

class Count
{
private:
    int value;

public:
    Count()
    {
        value = 5;
    }

    void operator++ ()
    {
        ++value;
    }

    void display()
    {
        std::cout <<"Value : "<<value;
    }
};

int main()
{
    Count obj;
    ++obj;
    obj.display();
    return EXIT_SUCCESS;
}