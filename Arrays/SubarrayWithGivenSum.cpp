//? Problem - Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.
//? Constraints - 1 <= N <= 10^5, 0 <= Ai <= 10^10

//* O(n^2) Solution

#include <iostream>
#include <vector> // Imported for vector<> Template

using namespace std; //using standards

void subWithSum(vector<int> v, int n, int s) // function definition
{
    int trigger = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            if (sum > s)
            {
                break;
            }
            else if (sum == s)
            {
                cout << i + 1 << " " << j + 1 << endl;
                trigger = 1;
                break;
            }
        }
        if (trigger == 1)
        {
            break;
        }
    }
}

int main()
{

    int n, s;
    cin >> n; // Input Size Of Array
    cin >> s; // Input The number S which we have to find.
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        v.push_back(e); // Initialize Array
    }
    subWithSum(v, n, s); // function Definition at Line 11

    return 0;
}