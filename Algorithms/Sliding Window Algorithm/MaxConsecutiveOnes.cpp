#include <iostream>
#include <algorithm>

using namespace std; //using standards

int maxOnes(int n, int *arr, int target)
{
    int zeroCount = 0, j = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        while (zeroCount > target)
        {
            if (arr[j] == 0)
            {
                zeroCount--;
            }
            j++;
        }
        ans = max(ans, i - j + 1);
    }
    return ans;
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
    cout << maxOnes(n, arr, target);

    //deallocate the array
    delete[] arr;
    arr = NULL;

    return 0;
}