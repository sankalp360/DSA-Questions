#include <bits/stdc++.h>
using namespace std;

vector<string> getAns(int n)
{
    if(n == 0)
    {
        return {""};
    }
    if(n < 0)
    {
        return {};
    }
    vector<string> mans;
    vector<string> path1 = getAns(n-1);
    vector<string> path2 = getAns(n-2);
    vector<string> path3 = getAns(n-3);
    
    for(string path: path1)
    {
        string curr_path = "1";
        curr_path += path;
        mans.push_back(curr_path);
    }
    for(string path: path2)
    {
        string curr_path = "2";
        curr_path += path;
        mans.push_back(curr_path);
    }
    for(string path: path3)
    {
        string curr_path = "3";
        curr_path += path;
        mans.push_back(curr_path);
    }
    return mans;
}

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<string> ans = getAns(n);
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
