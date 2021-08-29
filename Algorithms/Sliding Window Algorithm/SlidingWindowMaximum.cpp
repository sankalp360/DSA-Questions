#include <iostream>
#include <vector>
#include <set>
using namespace std;

void newFunc()
{
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (auto &i : v)
    {
        cin >> i;
    }

    multiset<int, greater<int>> s;

    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        s.insert(v[i]);
    }
    ans.push_back(*s.begin());

    for (int i = k; i < n; i++)
    {
        s.erase(s.lower_bound(v[i - k]));
        s.insert(v[i]);
        ans.push_back(*s.begin());
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
