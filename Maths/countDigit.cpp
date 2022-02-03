#include <bits/stdc++.h>
using namespace std;

int main()
{

    int temp = 0;
    cin >> temp;
    if (temp == NULL)
    {
        cout << 0 << endl;
        exit(0);
    }

    int digitCount = 0;

    while (temp != 0)
    {
        temp = temp / 10;
        digitCount++;
    }

    cout << digitCount << endl;
}