#include <iostream>
using namespace std;

int main()
{
    int rows = 4;
    int n = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << n++;
        }
        cout << "\n";
    }
    return 0;
}