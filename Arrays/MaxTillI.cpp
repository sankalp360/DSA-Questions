#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <algorithm> // Imported for max() function
#include <climits>   // Inported for INT_MIN Macro

using namespace std; //using standards

void maxTillI(vector<int> v, int n) // function definition
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, v[i]); // Storing maximum of two values in variable mx
        cout << mx << " ";  // Print Max Value
    }
}

int main()
{
    int n;
    cin >> n; // Input Size Of Array
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele); // Initialize Array
    }
    maxTillI(v, n); // Function to print max number till current number in the array, Function Definition on line 8
    return 0;
}
