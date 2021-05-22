#include <bits/stdc++.h>
using namespace std;

vector<string> numPaths(int m, int n)
{
    
    if(m == 1 && n == 1)
    {
        return {""};
    }
    if(m < 1 || n < 1)
    {
        return {};
    }
    vector<string> ans;
    
    for(int i=1; i<=n; i++)
    {
        
        vector<string> ans1 = numPaths(m, n-i);
        for(string path: ans1)
        {
            
            ans.push_back("h" + to_string(i) + path);
        }
    }
    for(int i=1; i<=m; i++)
    {
        vector<string> ans1 = numPaths(m-i, n);
        for(string path: ans1)
        {
            ans.push_back("v" + to_string(i) + path);
        }
    }
    for(int i=1; i<=n; i++)
    {
        vector<string> ans1 = numPaths(m-i, n-i);
        for(string path: ans1)
        {
            ans.push_back("d" + to_string(i) + path);
        }
    }
    
    return ans;
    
}
void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main()
{
    int m, n;
    cin >> m >> n;
    
    vector<string> v = numPaths(m, n);
    display(v);
    
}
