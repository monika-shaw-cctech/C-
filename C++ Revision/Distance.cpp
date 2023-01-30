//
// Created by Monika Shaw on 30-01-2023.
//
#include <iostream>
#include <stdlib.h>

class Distance
{
private:
    int meter;

    friend int addFive (Distance);

public:
    Distance()
    {
        meter = 0;
    }
};

int addFive(Distance d)
{
    d.meter = d.meter+5;
    return d.meter;
}

int main()
{
    Distance D;
    int d =  addFive(D);
    std::cout << d ;
    return EXIT_SUCCESS;
}