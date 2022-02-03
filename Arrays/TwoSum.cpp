#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(target - nums[i]) == m.end())
        {
            m[nums[i]] = i;
            continue;
        }
        return {m[target - nums[i]], i};
    }
    return {};
}
