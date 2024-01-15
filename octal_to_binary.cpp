#include <iostream>
using namespace std;

string octToBin(string octnum)
{
    long int i = 0;
    string binary = "";

    while (octnum[i])
    {
        switch (octnum[i])
        {
        case '0':
            binary += "000";
            break;
        case '1':
            binary += "001";
            break;
        case '2':
            binary += "010";
            break;
        case '3':
            binary += "011";
            break;
        case '4':
            binary += "100";
            break;
        case '5':
            binary += "101";
            break;
        case '6':
            binary += "110";
            break;
        case '7':
            binary += "111";
            break;
        default:
            cout << "\nInvalid Octal Digit" << octnum[i];
            break;
        }
        i++;
    }
    return binary;
}
int main()
{
    string octnum = "345";
    cout << "equivalent binary value = " << octToBin(octnum);
    return 0;
}