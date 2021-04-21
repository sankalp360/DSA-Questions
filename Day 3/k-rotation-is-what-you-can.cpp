#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int st, int en)
{
    while (st < en)
    {
        swap(arr[st], arr[en]);
        st++;
        en--;
    }
}

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
