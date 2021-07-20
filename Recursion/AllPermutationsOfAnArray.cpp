#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> ans;
void permuteArr(vector<int> &arr, int idx)
{
    if (idx == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[i], arr[idx]);
        permuteArr(arr, idx + 1);
        swap(arr[i], arr[idx]);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (auto &i : arr)
    {
        cin >> i;
    }

    permuteArr(arr, 0);

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
