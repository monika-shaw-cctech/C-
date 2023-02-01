//
// Created by Monika Shaw on 01-02-2023.
//
#include <iostream>
#include <thread>

class Thread_Obj
{
public:
    void operator()(int z)
    {
        for (int i = 0; i < z; i++)
        {
            std:: cout << "Thread using function object as callable\n";
        }
    }
};
int main()
{
    std::thread th(Thread_Obj(),3);
}