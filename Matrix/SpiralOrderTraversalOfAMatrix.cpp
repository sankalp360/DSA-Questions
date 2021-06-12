#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void spiralTraverse(int n, int m, int **arr) // function definition
{
    int row_start = 0;
    int row_end = n - 1;
    int col_start = 0;
    int col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }

        row_start++;

        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
        }

        col_end--;

        for (int col = col_end; col >= col_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }

        row_end--;

        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][col_start] << " ";
        }

        col_start++;
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

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

    spiralTraverse(n, m, arr); // function Definition at Line 8

    //deallocate the array
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}