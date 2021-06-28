#include <iostream>
using namespace std;

void clearBit(int num, int pos)
{
    int mask = ~(1<<pos);

    int ans = num & mask;

    cout << ans << endl;
}

int main()
{
    int num, pos;
    cin >> num >> pos;

    clearBit(num, pos);

    return 0;
}
