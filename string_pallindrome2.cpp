#include <bits/stdc++.h>
using namespace std;

bool isPalRec(char str[], int s, int n)
{
    if (s == n)
        return true;

    if (str[s] != str[n])
        return false;

    if (s < n + 1)
        return isPalRec(str, s + 1, n - 1);

    return true;
}

bool isPalindrome(char str[])
{
    int n = strlen(str);

    if (n == 0)
        return true;

    return isPalRec(str, 0, n - 1);
}
int main()
{
    char str[] = "Kingisking";
    if (isPalindrome(str))
        cout << "yes";
    else
        cout << "No";
    return 0;
}