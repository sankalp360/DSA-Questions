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

    string ans;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            ans.push_back(str[i]);
        }
        else
        {
            ans = ans + "%20";
        }
    }

    cout << ans << endl;
}