#include <iostream>
using namespace std;

int main()
{
    int n = 153;
    int temp = n;
    int ans = 0;

    while (n > 0)
    {
        int rem = n % 10;
        ans = (ans) + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == ans)
    {
        cout << "yes it is an armstrong number" << endl;
    }
    else
    {
        cout << "no it's not an armstrong number" << endl;
    }
}