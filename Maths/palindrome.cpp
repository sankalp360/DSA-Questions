#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int temp = num;
    int checker = 0;

    int tens_place = 0;

    while (temp != 0)
    {
        temp = temp / 10;
        tens_place++;
    }

    temp = num;

    while (tens_place != 0)
    {
        checker += (temp % 10) * pow(10, tens_place - 1);
        tens_place--;
        temp = temp / 10;
    }
    cout << checker;
}