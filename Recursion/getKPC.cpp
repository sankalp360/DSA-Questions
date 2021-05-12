#include <bits/stdc++.h>
using namespace std;

vector<string> getkpc(string n, unordered_map<char, string> m)
{
    if(n.size() == 0)
    {
        vector<string> base = {""};
        return base;
    }
    
    vector<string> prev = getkpc(n.substr(1), m);
    vector<string> ans;
    char key = n[0];
    string b = m[key];
    for(int i=0; i<b.size(); i++)
    {
        for(int j=0; j<prev.size(); j++)
        {
            ans.push_back(b[i] + prev[j]);
        }
    }        
                          
    return ans;
}



int main()
{
    string n;
    cin >> n;
    
    int cnt = 0;
    unordered_map<char, string> m;
    m['1'] = "abc";
    m['2'] = "def";
    m['0'] = ".;";
    m['3'] = "ghi";
    m['4'] = "jkl";
    m['5'] = "mno";
    m['6'] = "pqrs";
    m['7'] = "tu";
    m['8'] = "vwx";
    m['9'] = "yz";
    vector<string> ans = getkpc(n, m);
     cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}
