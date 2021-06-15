//* Constraints 1 <= n1, n2, n3 <= 300;

#include <iostream>
#include <vector>    // Imported for vector<> Template
#include <climits>   // Imported for INT_MIN / INT_MAX
#include <algorithm> // Imported for min() / max() function

using namespace std; //using standards

void matrixMultiplication(int n1, int n2, int n3, int **arr1, int **arr2) // function definition
{
    // defining a two array dynamically
    int **ans = new int *[n1];
    for (int i = 0; i < n1; i++)
        ans[i] = new int[n3];

    // initializing the matrix with 0
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    // matrix multiplication
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // printing the elements in the ans matrix
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    // deallocating the ans matrix
    for (int i = 0; i < n1; i++)
        delete[] ans[i];
    delete[] ans;
}

int main()
{

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    // allocate the array
    int **arr1 = new int *[n1];
    for (int i = 0; i < n1; i++)
        arr1[i] = new int[n2];

    int **arr2 = new int *[n2];
    for (int i = 0; i < n2; i++)
        arr2[i] = new int[n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    matrixMultiplication(n1, n2, n3, arr1, arr2); // function Definition at Line 10

    //deallocate the array
    for (int i = 0; i < n1; i++)
        delete[] arr1[i];
    delete[] arr1;

    for (int i = 0; i < n2; i++)
        delete[] arr2[i];
    delete[] arr2;

    return 0;
}