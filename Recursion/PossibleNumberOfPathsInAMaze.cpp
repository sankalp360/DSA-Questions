#include <iostream>
#include <string>
using namespace std;

int pathInMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return pathInMaze(n, i + 1, j) + pathInMaze(n, i, j + 1);
}

int main()
{
    int n;
    cin >> n;
    cout << pathInMaze(n, 0, 0) << endl;
    return 0;
}
