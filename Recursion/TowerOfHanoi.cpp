#include <iostream>
using namespace std;

void toh(int n, char src, char des, char help)
{
    if (n == 0)
    {
        return;
    }
    toh(n - 1, src, help, des);
    cout << "Move From " << src << " to " << des << endl;
    toh(n - 1, help, des, src);
}

int main()
{
    int n;
    cin >> n;

    char src, des, help;
    cin >> src >> des >> help;

    toh(n, src, des, help);
    return 0;
}