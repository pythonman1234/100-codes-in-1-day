#include <iostream>
using namespace std;

bool isEven(int n)
{
    return (n % 2 == 0);
}
int main()
{
    int n = 246;
    if (isEven(n) == true)
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }
    return 0;
}