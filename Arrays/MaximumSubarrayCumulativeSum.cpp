#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void maxSubarrayCumulative(vector<int> v, int n) // function definition
{
    vector<int> sums;
    sums.push_back(0);
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sums.push_back(sums[i] + v[i]); // sums = [0, 1, 3, 0, 4] for array [1, 2, -3, 4]
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = sums[i + 1] - sums[j]; // 1 - 0, 1 - 1, 1 - 3, 1 - 0, 3 - 0, 3 - 1, 3 - 3, 3 - 0,.....
            mx = max(mx, sum);
        }
    }
    cout << mx << endl;
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
    maxSubarrayCumulative(v, n); // Function to, function Definition at Line 6

    return 0;
}