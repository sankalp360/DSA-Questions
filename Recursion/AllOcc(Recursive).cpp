#include <bits/stdc++.h>
using namespace std;

void getOcc(vector<int>& arr, int idx, int x, int n, vector<int>& ans)
{
    if(idx == n)
    {
        return;
    }
    
    if(arr[idx] == x)
    {
        ans.push_back(idx);
    }
    
    getOcc(arr, idx + 1, x, n, ans);
    
    
}



void takeInput(vector<int>& arr, int n)
{
    if(n == 0)
    {
        return;
    }
    int a;
    cin >> a;
    arr.push_back(a);
    takeInput(arr, n-1);
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr;
    
    takeInput(arr, n);
   
    
    int x;
    cin >> x;
    
    vector<int> ans;
    getOcc(arr, 0, x, n, ans);
    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}
