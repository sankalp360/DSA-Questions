/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string paragraph;
    getline(cin, paragraph);
    vector<int> res;
    string word;
    cin >> word;

    int index = 0;
    while (index != -1)
    {
        index = paragraph.find(word, index);
        if (index == -1)
        {
            break;
        }
        res.push_back(index);
        index++;
    }
}