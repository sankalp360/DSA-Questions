#include <iostream>
#include <vector> // Imported for vector<> Template

using namespace std; //using standards

void sumOfSubarrays(vector<int> v, int n) // function definition
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];        // sum of subarray
            cout << sum << " "; // print the sum
        }
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
    sumOfSubarrays(v, n); // Function to print the sum of all subarrays of an array, function definition at line 6
    return 0;
}
