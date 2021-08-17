#include <iostream>

using namespace std;

int nRaisedToPowerP(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevPower = nRaisedToPowerP(n, p - 1);
    return n * prevPower;
}

int main()
{
    int inputN = 2;
    int inputP = 3;
    // cin >> inputN >> inputP;
    cout << nRaisedToPowerP(inputN, inputP) << endl;
    return 0;
}