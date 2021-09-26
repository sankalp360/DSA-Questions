#include <iostream>
#include <algorithm>

using namespace std; //using standards

bool threeSum(int n, int *arr, int target)
{
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);

    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            int curr = arr[i] + arr[l] + arr[r];
            if (curr == target)
            {
                return true;
            }
            if (curr < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return false;
}

int main()
{

    int n, target;
    cin >> n >> target;

    // allocate the array
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << threeSum(n, arr, target);

    //deallocate the array
    delete[] arr;
    arr = NULL;

    return 0;
}