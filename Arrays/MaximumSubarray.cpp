#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void maxSubarray(vector<int> v, int n) // function definition
{
    int mx = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum += v[k];
            }
            mx = max(mx, sum);
            sum = 0;
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
    maxSubarray(v, n); // Function to, function Definition at Line 8

    return 0;
}