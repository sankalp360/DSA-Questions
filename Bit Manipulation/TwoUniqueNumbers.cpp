#include <iostream>
using namespace std;

bool setBit(int n, int pos)
{
    int mask = 1 << pos;
    return ((n & mask));
}

void twoUniques(int n, int *arr)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }

    int tempxorsum = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum >>= 1;
    }

    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newxor ^= arr[i];
        }
    }

    int unique_one = newxor;
    int unique_two = newxor ^ tempxorsum;

    cout << unique_one << " " << unique_two << endl;
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

    twoUniques(n, arr);

    delete[] arr;
    arr = NULL;

    return 0;
}
