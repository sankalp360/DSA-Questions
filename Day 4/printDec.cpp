#include <bits/stdc++.h>
using namespace std;

void printDec(int n)
{
    if(n == 0)
        return ;
    printDec(n-1);
    cout << n << endl;
    
}

int main()
{
    printDec(10);

}
