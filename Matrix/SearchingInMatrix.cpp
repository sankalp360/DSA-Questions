#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void matrixSearch(int n, int m, int s, int **arr)
{
    int trigger = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == s)
            {
                trigger = 1;
                cout << trigger;
                return;
            }
        }
    }
    cout << trigger;
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

    matrixSearch(n, m, s, arr);

    //deallocate the array
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}