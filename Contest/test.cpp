#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] >= nums[i])
        {
            if (nums[i] != 1)
            {
                if (nums[i - 2] >= nums[i])
                {
                    nums.erase(nums.begin() + i);
                    break;
                }
            }
            nums.erase(nums.begin() + i - 1);
            break;
        }
    }
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] >= nums[i])
        {
            cout << false;
            exit(0);
        }
    }

    // return true;
    cout << true;
}