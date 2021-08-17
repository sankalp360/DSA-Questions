#include <iostream>
using namespace std;

bool powerOfTwo(int num)
{
    return num && !(num & num - 1);
}

int main()
{
    int num;
    cin >> num;

    cout << powerOfTwo(num);

    return 0;
}
