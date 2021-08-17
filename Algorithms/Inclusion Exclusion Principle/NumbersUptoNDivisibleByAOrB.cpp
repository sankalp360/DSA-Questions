#include <iostream>
using namespace std;

void divisibleByAOrB(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    cout << c1 + c2 - c3 << endl;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    divisibleByAOrB(n, a, b);

    return 0;
}
