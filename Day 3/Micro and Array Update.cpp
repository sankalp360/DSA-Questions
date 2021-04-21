#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int cost1, cost2;
        cin >> cost1 >> cost2;

        int n;
        cin >> n;

        int first = 0;
        int second = 0;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if (a == 1)
                first++;
            if (b == 1)
                second++;
        }

        int total = (max(second, first) * min(cost1, cost2)) + (min(second, first) * max(cost1, cost2));
        cout << total << endl;
    }
}
