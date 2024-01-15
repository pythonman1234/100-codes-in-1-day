#include <bits/stdc++.h>
using namespace std;

void print_index(vector<int> v, int element)
{
    auto it = find(v.begin(), v.end(), element);
    if (it != v.end())
    {
        int index = it - v.begin();
        cout << index << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int element = 5;
    print_index(v, element);

    return 0;
}