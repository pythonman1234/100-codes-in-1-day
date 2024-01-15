#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;

    cout << "max :" << (((a + b) + abs(a - b)) / 2) << endl;
    cout << "min :" << (((a - b) - abs(a - b)) / 2) << endl;

    return 0;
}