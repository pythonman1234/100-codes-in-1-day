#include <iostream>
using namespace std;

int findSum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n = 7;
    cout << findSum(7);
    return 0;
}