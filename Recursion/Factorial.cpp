#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int prevFactorial = factorial(n - 1);
    return n * prevFactorial;
}

int main()
{
    int input = 4;
    // cin >> input;
    cout << factorial(input);
    return 0;
}