#include<bits/stdc++.h>
using namespace std;
void removeDup(string& str, string &output)
{
    
    if(str.size() == 2)
    {
        if(str[0] == str[1])
        {
            output += str[0];
        }
        else
        {
            output += str;
        }
        
        return;
    }
    
    if(str[0] == str[1])
    {
        
    }
    else
    {
        output += str[0];
    }
    string r = str.substr(1);
    removeDup(r, output);
    
}

int main()
{
    string str;
    cin >> str;
    
    string output;
    removeDup(str, output);
    cout << output ;
}
