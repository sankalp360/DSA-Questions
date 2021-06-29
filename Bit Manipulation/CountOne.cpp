#include <iostream>
using namespace std;

int numberOfOne(int num)
{
    int count = 0;
    while (num)
    {
        num = num & num - 1;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cin >> num;
    cout << numberOfOne(num) << endl; 
    return 0;
}
