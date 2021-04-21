#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    pair<int, int> p;
    p.first = 0;
    p.second = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
            p.first--;
        if (s[i] == 'R')
            p.first++;
        if (s[i] == 'D')
            p.second--;
        if (s[i] == 'U')
            p.second++;
    }
    cout << p.first << " " << p.second << endl;
}
