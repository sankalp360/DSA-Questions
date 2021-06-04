#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <algorithm> // Imported for max() function
#include <climits>   // Imported for INT_MIN Macro

using namespace std; //using standards

void recordBreaker(vector<int> v, int n) // function definition
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1)) //For Last element We can't check for next element So it is an Edge case.
        {
            if (v[i] > maxi)
            {
                cout << i << " ";
            }
        }
        else if (v[i] > maxi && v[i] > v[i + 1]) // If Both the conditions are true
        {
            cout << i << " "; // Print the Index of Record Breaking Day
        }
        maxi = max(maxi, v[i]); // Keep Update of the Previous maximum number ( Optimization )
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

    recordBreaker(v, n); // Function to Print Record Breaking Days, Defintion at Line 8

    return 0;
}