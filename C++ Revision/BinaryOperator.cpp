//
// Created by Monika Shaw on 30-01-2023.
//
#include <iostream>

class BinaryOperator
{
private:
    int x;
public:
    void getNum(int n)
    {
        x = n;
    }

    void display()
    {
        std::cout << "Sum : " <<x;
    }

    BinaryOperator operator + (BinaryOperator &ob)
    {
        BinaryOperator b;
        b.x = x + ob.x;
        std::cout <<b.x << x << ob.x;
        return b;
    }


};
int main()
{
   BinaryOperator n1 ,n2, sum;
   n1.getNum(10);
   n2.getNum(20);
   sum = n1 + n2;
   sum.display();


}