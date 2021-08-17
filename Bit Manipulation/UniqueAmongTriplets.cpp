#include <iostream>
using namespace std;

bool getBit(int n, int pos)
{
    int mask = 1 << pos;
    return (n & mask);
}

int setBit(int n, int pos)
{
    int mask = 1 << pos;
    return (n | mask);
}

void uniqueAmongTriplets(int n, int *arr)
{
    int ans = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3)
        {
            ans = setBit(ans, i);
        }
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

    uniqueAmongTriplets(n, arr);

    delete[] arr;
    arr = NULL;

    return 0;
}
