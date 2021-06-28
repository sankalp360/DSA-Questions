#include <iostream>
using namespace std;

void setBit(int num, int pos)
{
    int mask = 1 << pos;

    int ans = num | mask;

    cout << ans << endl;
}

int main()
{
    int num, pos;
    cin >> num >> pos;

    setBit(num, pos);

    return 0;
}
