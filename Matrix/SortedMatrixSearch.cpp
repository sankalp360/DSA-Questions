#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void sortedMatrixSearch(int n, int m, int s, int **arr) // function definition
{
    int r, c;
    r = 0;
    c = m - 1;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == s)
        {
            cout << "found" << endl;
            return;
        }
        if (arr[r][c] > s)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    cout << "not found" << endl;
}

int main()
{

    int n, m, s;
    cin >> n >> m >> s;

    // allocate the array
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    sortedMatrixSearch(n, m, s, arr); // Function to, function Definition at Line 8

    //deallocate the array
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}