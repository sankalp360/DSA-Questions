#include <bits/stdc++.h>
using namespace std;

vector<string> gss(string s){
    // write your code here
    
    if(s.size() == 0)
    {
        vector<string> base = {""};
        return base;
    }
    char curr = s[0];
    s = s.substr(1);
    vector<string> ans = gss(s);
    vector<string> output = ans;
    for(int i=0; i<ans.size(); i++)
    {
        output.push_back(curr + ans[i]);
    }
    return output;
    
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

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
