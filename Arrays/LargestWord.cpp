#include <iostream>
#include <string>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void largestWord(vector<char> v, int n)
{
    int currLen = 0;
    int maxLen = 0;
    int st = 0;
    int maxst = 0;

    for (int i = 0; i < n + 1; i++)
    {
        if (v[i] == '0' || v[i] == ' ')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i + 1;
        }
        else
        {
            currLen++;
        }
    }

    cout << maxLen << endl;

    for (int i = 0; i < maxLen; i++)
    {
        cout << v[i + maxst];
    }
}

int main()
{
    int n;
    cin >> n; // Input Size Of Array

    cin.ignore();
    string str;
    getline(cin, str);
    cin.ignore();

    vector<char> v;

    for (int i = 0; i < n; i++)
    {
        v.push_back(str[i]); // Initialize Array
    }

    v.push_back('0');

    largestWord(v, n); // function Definition at Line 8

    return 0;
}