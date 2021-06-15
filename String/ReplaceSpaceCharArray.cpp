/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <bits/stdc++.h>
using namespace std;

void replace(char *str, char to_replaced, string replacer)
    [int space = 0;
     for (int i = 0; i < strlen(str); i++)
     {
    if (str[i] == to_replaced)
    {
        space++;
    }
     } int idx = strlen(str) + 2 * space;

     for (int i = strlen(str) - 1; i >= 0; i--){

     }

    int main()
{
    // Replace space using char array
    char str[100];
    getline(cin, str);

    replace(str, " ", "%20");

    cout << str << endl;
}