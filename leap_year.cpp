#include <iostream>
using namespace std;

bool checkYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return true;
    if (year % 4 == 0)
        return true;
    return false;
}

int main()
{
    int year = 2000;
    if (checkYear(year))
    {
        cout << "leap year";
    }
    else
    {
        cout << "not a leap year";
    }
    return 0;
}