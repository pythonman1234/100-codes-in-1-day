#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 10;
    if (a ^ b)
        cout << "not equal";
    else
        cout << "equal";
    return 0;
}