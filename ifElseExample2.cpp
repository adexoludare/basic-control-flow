// ifElseExample2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // User enter sidelenght of a triangle (a,b,c)
    // Program should write out wether that triangle is equileteral, isosceles or scalene

    float a, b, c;
    cout << "Please enter the sidelenght a, b, c of the triangle\n";
    cin >> a >> b >> c;
    if (a==b && b==c)
        cout << "You have entered an Equileteral Triangle" << endl;
    else
        if (a!=b && a!=c && b!=c) 
            cout << "You have entered an Scalene Triangle" << endl;
        else
            cout << "You have entered an isosceles Triangle" << endl;

    cout << "---- Thanks. Bye. -----";   

    system("pause>0");
}

