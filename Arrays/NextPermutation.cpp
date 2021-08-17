#include <iostream>
#include <vector>    // Imported for vector<> Template

using namespace std; //using standards

vector<vector<int>> ans;

void permute(vector<int> &v)
{
    sort(v.begin(), v.end());
    do
    {
        ans.push_back(v);
    } while (next_permutation(v.begin(), v.end()));
    return;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &i : v)
    {
        cin >> i;
    }
    permute(v);

    for (auto q : ans)
    {
        for (auto i : q)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}