#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void kadaneMaxSum(vector<int> v, int n) // function definition
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
    cout << maxSum << endl;
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
    kadaneMaxSum(v, n); // Function to, function Definition at Line 6

    return 0;
}