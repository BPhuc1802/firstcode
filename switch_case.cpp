#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    int day;
    cout << "Day: " << endl;
    cin >> day;
    switch (day)
    {
        case 2:
        cout << "Monday" << endl;
        break;

        case 3:
        cout << "Tuesday" << endl;
        break;

        case 4:
        cout << "Wednesday" << endl;
        break;

        case 5:
        cout << "Thursday" << endl;
        break;

        case 6:
        cout << "Friday" << endl;
        break;

        case 1:
        cout << "Weekend" << endl;
        break;

        default :
        cout << "please re-enter";
    }
    return 0;
}