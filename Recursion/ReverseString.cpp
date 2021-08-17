#include <iostream>
#include <string>
using namespace std;

void reverseString(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    string resOfStr = str.substr(1);
    reverseString(resOfStr);
    cout << str[0];
}

int main()
{
    string str;
    cin >> str;

    reverseString(str);
    return 0;
}