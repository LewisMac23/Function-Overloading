// FunctionOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Function overloading
-Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
-Function overloading can be considered as an example of polymorphism feature in C++.
*/

#include <iostream>
using namespace std;

int add(int a, int b)   //1
{
    cout << "function 1" << endl;
    return(a + b);
}

double add(double a, double b)  //2
{
    cout << "function 2" << endl;
    return(a + b);
}

int add(int a, int b, int c)    //3
{
    cout << "function 3" << endl;
    return(a + b + c);
}

double add(int a, double b)     //4
{
    cout << "function 4" << endl;
    return(a + b);
}

double add(double a, int b)     //5
{
    cout << "function 5" << endl;
    return(a + b);
}

int main()
{
    cout <<"Addition is: "<< add(1, 2) << endl;//1
    cout << "Addition is: " << add(3.5, 4.5) << endl;//2
    cout << "Addition is: " << add(3, 4, 5) << endl;//3
    cout << "Addition is: " << add(3, 4.5) << endl;//4
    cout << "Addition is: " << add(3.5, 4) << endl;//5

    return 0;
}

