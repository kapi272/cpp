#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    case 3:
        cout << "wednesday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    case 7:
        cout << "sunday" << endl;
        break;
    default:
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return main();
}
// This program demonstrates the use of switch statements in C++.