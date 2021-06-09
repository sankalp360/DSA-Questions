#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

int kadane(vector<int> v, int n)
{
    int sum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

void circularSubarray(vector<int> v, int n)
{
    int wrapSum, nonWrapSum;

    nonWrapSum = kadane(v, n);

    int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        totalSum += v[i];
        v[i] = -(v[i]);
    }

    wrapSum = totalSum + kadane(v, n);

    int ans = max(wrapSum, nonWrapSum);

    cout << ans << endl;
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
    circularSubarray(v, n); // function Definition at Line 25

    return 0;
}