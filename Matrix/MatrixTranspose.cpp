//* Constraints 1<=n<=1000;

#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void matrixTranspose(int n, int **arr) // function definition
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    // allocate the array
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    matrixTranspose(n, arr); // function Definition at Line 10

    //deallocate the array
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}