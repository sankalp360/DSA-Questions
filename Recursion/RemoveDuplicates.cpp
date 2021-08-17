#include <iostream>
#include <string>
using namespace std;

void removeDuplicate(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    string restStr = str.substr(1);
    if (str[0] == str[1])
    {
        removeDuplicate(restStr);
    }
    else
    {
        cout << str[0];
        removeDuplicate(restStr);
    }
}

int main()
{
    string str;
    cin >> str;

    removeDuplicate(str);
    return 0;
}