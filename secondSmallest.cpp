#include <climits>
#include <iostream>
using namespace std;

void print2smallest(int arr[], int n)
{
    int first, second;

    if (n < 2)
    {
        cout << "invalid input";
        return;
    }
    first = second = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT32_MAX)
        cout << "there is no second smallest element\n";
    else
        cout << "second smallest element is" << second << endl;
}
int main()
{
    int arr[] = {21, 3, 15, 41, 34, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    print2smallest(arr, n);

    return 0;
}