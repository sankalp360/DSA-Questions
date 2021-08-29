#include <iostream>
#include <vector>
#include <deque>
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

    deque<int> q;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && v[q.back()] < v[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(v[q.front()]);

    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
        {
            q.pop_front();
        }
        while (!q.empty() && v[q.back()] < v[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(v[q.front()]);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
