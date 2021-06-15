/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <bits/stdc++.h>
using namespace std;

void replace(char *str, char to_replaced, string replacer)
{
    int space = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == to_replaced)
        {
            space++;
        }
    }
    int idx = strlen(str) + 2 * space;
    str[idx] = '/0';
    cout << space << endl;
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[idx - 1] = '0';
            str[idx - 2] = '2';
            str[idx - 3] = '%';
            idx = idx - 3;
        }
        else
        {
            str[idx - 1] = str[i];
            idx--;
        }
    }
}

int main()
{
    // Replace space using char array
    char str[100];
    cin.getline(str, 100);

    replace(str, ' ', "%20");

    cout << str << endl;
}