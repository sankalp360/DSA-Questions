#include <iostream>
using namespace std;

void uniqueNumber(int n, int *arr)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }
    cout << ans << endl;
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

    uniqueNumber(n, arr);

    delete[] arr;
    arr = NULL;

    return 0;
}
