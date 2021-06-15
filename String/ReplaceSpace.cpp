/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int index = str.find(" ");
    while (index != -1)
    {
        str.replace(index, 1, "%20");
        index = str.find(" ");
    }

    cout << str << endl;
}