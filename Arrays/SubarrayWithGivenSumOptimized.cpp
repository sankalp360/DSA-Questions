//? Problem - Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.
//? Constraints: 1 <= N <= 10^5, 0 <= Ai <= 10^10

//* O(n) Solution

#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void subGivenSum(vector<int> v, int n, int s) // function definition
{
    int i = 0;
    int j = 0;
    int sum = 0;

    if (s == 0)
    {
        auto pos = find(v.begin(), v.end(), s);
        cout << (pos - v.begin()) + 1;
        return;
    }

    while (j < n)
    {
        sum += v[j];

        while (sum > s)
        {
            sum -= v[i];
            i++;
        }
        if (sum == s)
        {
            cout << i + 1 << " " << j + 1;
            return;
        }
        j++;
    }
}

int main()
{

    int n, s;
    cin >> n; // Input Size Of Array
    cin >> s;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e); // Initialize Array
    }
    subGivenSum(v, n, s); // Function to, function Definition at Line 13

    return 0;
}