#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void pairSumTwoPointer(vector<int> v, int n, int s) // function definition
{
    int start, end;
    start = 0;
    end = n - 1;

    sort(v.begin(), v.end());

    while (start < end)
    {
        if (v[start] + v[end] == s)
        {
            cout << "true" << endl;
            return;
        }
        if (v[start] + v[end] < s)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    cout << "false" << endl;
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
    pairSumTwoPointer(v, n, s); // Function to, function Definition at Line 6

    return 0;
}