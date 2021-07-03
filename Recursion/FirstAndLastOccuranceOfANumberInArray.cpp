#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstOccur(arr, n, i + 1, key);
}

int lastOccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restArray = lastOccur(arr, n, i + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n >> key;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    cout << firstOccur(arr, n, i, key) << " ";
    cout << lastOccur(arr, n, i, key) << endl;

    delete[] arr;
    arr = NULL;

    return 0;
}