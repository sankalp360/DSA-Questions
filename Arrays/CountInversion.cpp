#include <iostream>
#include <string>
using namespace std;

long long inversion(int *arr, int l, int mid, int r)
{
    long long inv = 0;

    int n1 = mid - l + 1;
    int n2 = r - mid;

    int *a = new int[n1];
    int *b = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
            inv += n1 - i;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }

    delete[] a;
    delete[] b;
    a = NULL;
    b = NULL;

    return inv;
}

long countInversion(int *arr, int l, int r)
{
    long long inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += countInversion(arr, l, mid);
        inv += countInversion(arr, mid + 1, r);

        inv += inversion(arr, l, mid, r);
    }

    return inv;
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

    cout << countInversion(arr, 0, n - 1);

    delete[] arr;
    arr = NULL;
    return 0;
}
