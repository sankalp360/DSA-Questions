#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void upperCase(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
}

void lowerCase(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
}

int main()
{
    string str;
    getline(cin, str);

    upperCase(str);
    lowerCase(str);

    return 0;
}
