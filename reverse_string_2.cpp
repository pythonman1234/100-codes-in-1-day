#include <iostream>
using namespace std;

void reverse_Str(string &s, int n, int i)
{
    if (n <= i)
    {
        return;
    }
    swap(s[i], s[n]);
    reverse_Str(s, n - 1, i + 1);
}

int main()
{
    string str = "kingisking";
    reverse_Str(str, str.length() - 1, 0);
    cout << str << endl;
}