#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int getMaxArea(vector<int> v)
{
    int n = v.size();
    int ans = 0;
    int i = 0;
    stack<int> st;
    v.push_back(0);
    while (i < n)
    {
        while (!st.empty() && v[st.top()] > v[i])
        {
            int t = st.top();
            int h = v[t];

            st.pop();

            if (st.empty())
            {
                ans = max(ans, h * i);
            }
            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, h * len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main()
{
    vector<int> v = {2, 1, 5, 6, 2, 3};
    cout << getMaxArea(v);
    return 0;
}
