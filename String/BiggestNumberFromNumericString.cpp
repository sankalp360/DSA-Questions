#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void biggestNumber(string str)
{
    sort(str.begin(), str.end(), greater<int>());

    cout << str << endl;
}

int main()
{
    string str;
    cin >> str;

    biggestNumber(str);

    return 0;
}
