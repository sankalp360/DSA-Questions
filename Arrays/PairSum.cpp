#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void pairSum(vector<int> v, int n, int s) // function definition
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == s)
            {
                cout << "true" << endl;
                return;
            }
        }
    }
    cout << "false" << endl;
}

int main()
{

    int n, s;
    cin >> n; // Input Size Of Array
    cin >> s; // The Sum we have to find
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e); // Initialize Array
    }
    pairSum(v, n, s); // function Definition at Line 8

    return 0;
}