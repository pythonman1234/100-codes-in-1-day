#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int decimal = 0, octal = 0, place = 1;

    decimal = 55;

    int temp = decimal;

        while (temp)
    {
        int lastDigit = temp % 8;
        temp /= 8;
        octal += lastDigit * place;
        place *= 10;
    }
    cout << "octal equivalent" << octal << endl;
    return 0;
}