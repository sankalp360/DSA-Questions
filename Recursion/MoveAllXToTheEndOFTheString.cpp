#include <iostream>
#include <string>
using namespace std;

void moveXToEnd(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    int count = 0;
    if (str[0] == 'x')
    {
        count++;
        moveXToEnd(str.substr(1));
    }
    else
    {
        cout << str[0];
        moveXToEnd(str.substr(1));
    }
    for (int i = 0; i < count; i++)
    {
        cout << 'x';
    }
}

string moveYToEnd(string str)
{
    if (str.length() == 0)
    {
        return "";
    }

    char ch = str[0];
    string ans = moveYToEnd(str.substr(1));

    if (ch == 'y')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{
    string str;
    cin >> str;

    moveXToEnd(str);
    cout << endl;
    cout << moveYToEnd(str) << endl;
    return 0;
}