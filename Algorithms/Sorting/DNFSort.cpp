#include <iostream>

using namespace std; //using standards

void dnfSort(int n, int *arr)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
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
    dnfSort(n, arr);

    //deallocate the array
    delete[] arr;
    arr = NULL;

    return 0;
}