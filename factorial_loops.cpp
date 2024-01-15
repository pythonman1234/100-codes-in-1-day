#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while (n > 1)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int main()
{
    int num = 5;
    cout << factorial(num);
    return 0;
}