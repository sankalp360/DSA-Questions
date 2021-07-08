#include <iostream>
#include <string>
using namespace std;

int countWays(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++) //! decision by rolling a dice
    {
        count += countWays(s + i, e);
    }
    return count;
}

int main()
{
    int s, e;
    cin >> s >> e;
    cout << countWays(s, e) << endl;
    return 0;
}
