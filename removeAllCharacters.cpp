#include <cctype>
#include <iostream>
#include <string>

using namespace std;

string remove_non_alphabets(string str)
{

    string result = "";

    for (char c : str)
    {

        if (isalpha(c))
        {

            result += c;
        }
    }

    return result;
}

int main()
{

    string str = "Gee$ksfor$geeks";

    cout << "Alphabets only: " << remove_non_alphabets(str)

         << endl;

    return 0;
}