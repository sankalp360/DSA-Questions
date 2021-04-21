#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int min_no = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int el;
            cin >> el;
            min_no = min(min_no, el);
        }

        if (min_no >= k)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << k - min_no << endl;
        }
    }
}
