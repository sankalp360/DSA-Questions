#include <iostream>

using namespace std;

void increasingOrder(int n)
{
    if (n == 0)
    {
        return;
    }
    increasingOrder(n - 1);
    cout << n << " ";
}

void decreasingOrder(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    decreasingOrder(n - 1);
}

int main()
{
    int n;
    cin >> n;

    decreasingOrder(n);
    cout << endl;
    increasingOrder(n);

    return 0;
}