#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;
    vector<int> pup;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pup.push_back(a);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == k)
        {
            continue;
        }
        else
        {
            cnt = cnt + pup[i] * abs((i + 1) - k);
        }
    }
    cout << cnt << endl;
}