#include <iostream>

using namespace std; //using standards

void waveSort(int n, int *arr)
{
    for (int i = 1; i < n; i = i + 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;

    // allocate the array
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    waveSort(n, arr);

    //deallocate the array
    delete[] arr;
    arr = NULL;

    return 0;
}