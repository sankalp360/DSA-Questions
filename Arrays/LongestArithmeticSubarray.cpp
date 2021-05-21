#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <algorithm> // Imported for max() function

using namespace std; //using standards

int longestSubarray(vector<int> v, int n) // function definition
{
    int ans = 2;
    int prevSum = v[1] - v[0];
    int i = 2;
    int current = 2;
    while (i < n)
    {
        if (prevSum == v[i] - v[i - 1]) // if condition goes true increment current
        {
            current++;
        }
        else // else set prevsum to the last continuous element and reset the current to 2
        {
            prevSum = v[i] - v[i - 1];
            current = 2;
        }
        ans = max(ans, current); // ans stores the final answer that is size of longest arithmetic subarray.
        i++;
    }
    return ans; // returning the ans
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

    int result = longestSubarray(v, n); // Function To Return the size of longest arithmetic subarray, function definition at line 7
    cout << result << endl;             // print the final result
    return 0;
}