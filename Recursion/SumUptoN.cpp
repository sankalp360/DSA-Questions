#include <iostream>

using namespace std;

int sumTillN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevSum = sumTillN(n - 1);
    return n + prevSum;
}

int main()
{
    int input = 25;
    // cin >> input;
    cout << sumTillN(input) << endl;
    return 0;
}