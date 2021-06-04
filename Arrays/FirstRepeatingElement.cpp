#include <iostream>
#include <vector> // Imported for vector<> Template
#include <climits> // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void repeatingElement(vector<int> v, int n) // function definition
{
    const int N = 1e6 + 2;
    int minidx = INT_MAX;

    vector<int> idx(N, -1);

    for (int i = 0; i < n; i++)
    {
        if (idx[v[i]] != -1)
        {
            minidx = min(minidx, idx[v[i]]);
        }
        else
        {
            idx[v[i]] = i;
        }
    }
    if (minidx == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << minidx + 1 << endl;
    }
}

int main()
{

    int n;
    cin >> n; // Input Size Of Array
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e); // Initialize Array
    }

    repeatingElement(v, n); // Function to, function Definition at Line 6

    return 0;
}