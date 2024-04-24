// ifElseExample1.cpp : This app takes number from user and tell user the number is even or old number
//

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter whole number\n";
    cin >> number ;
    if (number % 2 == 0)
    {
        cout << "You entered an even number" << endl;
    }
    else
    {
        cout << "You entered an old number" << endl;
    }
    cout << "Thanks Bye";

    system("pause>0");
}


