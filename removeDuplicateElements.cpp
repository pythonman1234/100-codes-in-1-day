#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int n)
{
    int i;
    set<int> s;
    for (i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    set<int>::iterator it;
    cout << "After removing duplicates\n";
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
int main()
{
    int arr[] = {1, 2, 2, 4, 3, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "before removing duplicates\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    removeDuplicates(arr, n);
    return 0;
}