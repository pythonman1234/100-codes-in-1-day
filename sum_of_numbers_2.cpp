#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int sum_of_numbers(string str)
{
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
        {
            sum += ch - '0';
        }
    }
    return sum;
}

int main()
{
    string str;

    str = "1234";
    cout << "sum of numbers: " << sum_of_numbers(str) << endl;

    return 0;
}