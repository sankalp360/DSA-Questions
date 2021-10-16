#include <bits/stdc++.h>
using namespace std;


int main()
{
    int cnt=0;
    string str;
    cin >> str;

    char f;
    cin >> f;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == f)
            cnt++;
    }

    cout << cnt << endl;
    
    
}
