#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void checkPalindrome(int n, vector<char> v)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[n - 1 - i])
        {
            cout << "not palindrome" << endl;
            return;
        }
    }
    cout << "palindrome" << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<char> v;

    for (int i = 0; i < n; i++)
    {
        char ele;
        cin >> ele;
        v.push_back(ele);
    }

    checkPalindrome(n, v); // function Definition at Line 8

    return 0;
}