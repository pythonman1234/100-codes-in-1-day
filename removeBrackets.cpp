#include <iostream>
#include <string>
using namespace std;

string remove_brackets(string str)
{
    string result = "";
    for (char c : str)
    {
        if (c != '(' && c != ')')
        {
            result += c;
        }
    }
    return result;
}

int main()
{
    string str = "King)(for)(King";
    cout << "Without brackets:" << remove_brackets(str) << endl;
    return 0;
}