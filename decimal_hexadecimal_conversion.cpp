#include <cmath>
#include <iostream>
#include <string>

using namespace std;

string decimalToHex(int decimal)
{
    string hexadecimal = " ";
    char hexaDecimals[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while (decimal > 0)
    {
        int remainder = decimal % 16;
        hexadecimal = hexaDecimals[remainder] + hexadecimal;
        decimal /= 16;
    }
    return hexadecimal;
}
int main()
{
    int decimal = 103;
    cout << "hexadecimal equivalent: " << decimalToHex(decimal) << endl;
    return 0;
}