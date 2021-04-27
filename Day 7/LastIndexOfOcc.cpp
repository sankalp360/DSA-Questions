#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){
    // write your code here
    if(idx == n)
    {
        return -1;
    }
    
    int ans ,ans1, ans2;
    if(arr[idx] == x)
    {
        ans1 = idx;
    }
    else
    {
        ans1 = -1;
    }
    ans2 = lastIndex(arr, idx+1, x, n);
    ans = max(ans1, ans2);
    return ans;

}

int main(){
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}
