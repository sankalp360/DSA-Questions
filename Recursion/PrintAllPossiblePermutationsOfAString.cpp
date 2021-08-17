#include <iostream>
#include <string>
using namespace std;

void allPermutation(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        string ros = str.substr(0, i) + str.substr(i + 1);
        allPermutation(ros, ans + ch);
    }
}

int main()
{
    string str;
    cin >> str;
    allPermutation(str, "");
    return 0;
}
