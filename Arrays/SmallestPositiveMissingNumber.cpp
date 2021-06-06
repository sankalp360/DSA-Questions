//? Given An Array A[] of size N. Find Smallest Positive Missing Number from the array.
//? Constrains: 1 <= N <= 10^6, -10^6 <= Ai <= 10^6

//* O(n) Solution

#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void smallestMissingNumber(vector<int> v, int n) // function definition
{
    int N = 1e6 + 2;
    int ans = -1;
    vector<bool> check(N, false);

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 0)
        {
            check[v[i]] = true;
        }
    }

    for (int i = 0; i <= n; i++)
    {
        if (!check[i] && i != 0)
        {
            ans = i;
            break;
        }
    }
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
    smallestMissingNumber(v, n); // Function to, function Definition at Line 13

    return 0;
}