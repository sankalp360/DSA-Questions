#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxLength = 0;

    int currDiff = arr[1] - arr[0];
    int cnt = 2;
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == currDiff)
        {
            cnt++;
        }
        else
        {
            cnt = 2;
            currDiff = arr[i] - arr[i - 1];
        }
        maxLength = max(maxLength, cnt);
    }

    cout << maxLength << endl;
}
