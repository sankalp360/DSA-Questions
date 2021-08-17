#include <iostream>

using namespace std;

bool isSorted(int n, int *arr)
{
    if (n == 1)
    {
        return true;
    }

    bool restArray = isSorted(n - 1, arr + 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << isSorted(n, arr);

    delete[] arr;
    arr = NULL;

    return 0;
}