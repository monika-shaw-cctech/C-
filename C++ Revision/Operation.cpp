//
// Created by Monika Shaw on 31-01-2023.
//
#include<iostream>
using namespace std;
auto operation = []  (int a, int b,  string op) -> double {
    if (op == "sum") {
        return a + b;
    }
    else {
        return (a + b) / 2.0;
    }
};

int main() {

    int num1 = 1;
    int num2 = 2;

    auto sum = operation(num1, num2, "sum");
    cout << "Sum = " << sum << endl;

    auto avg = operation(num1, num2, "avg");
    cout << "Average = " << avg;

    return 0;
}