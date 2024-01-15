#include <iostream>
using namespace std;

string isPallindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++)
    {
        if (S[i] != S[S.length() - i - 1])
        {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    string S = "kingQueen";
    cout << isPallindrome(S);
    return 0;
}