#include <iostream>

using namespace std;

long nFibonacci(long n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return nFibonacci(n - 1) + nFibonacci(n - 2);
}

int main()
{
    long input = 25;
    // cin >> input;
    cout << nFibonacci(input) << endl;
    return 0;
}