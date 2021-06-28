#include <iostream>
using namespace std;

void updateBit(int num, int pos, bool value)
{
    int mask = ~(1 << pos);

    int hold = num & mask;

    int ans = (hold | (value << pos));

    cout << ans << endl;
}

int main()
{
    int num, pos;
    bool value;
    cin >> num >> pos >> value;

    updateBit(num, pos, value);

    return 0;
}
