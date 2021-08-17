#include <iostream>
using namespace std;

void getBit(int num, int pos)
{
    int mask = 1 << pos;

    bool ans = (num & mask) != 0;

    cout << ans << endl;
}

int main()
{
    int num, pos;
    cin >> num >> pos;

    getBit(num, pos);

    return 0;
}
