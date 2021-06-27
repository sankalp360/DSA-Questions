#include <bits/stdc++.h>
using namespace std;

//function to remove duplicates in a string or char array
void removeDuplicates(char a[])
{
    for(int i = 0; i < strlen(a) - 2; i++)
    {
        if(a[i] == a[i + 1])
        {
            int j = i + 1;
            while(j != strlen(a))
            {
                a[j - 1] = a[j];
                j++;
            }
            a[--j] = '\0';
        }
    }
}

int main()
{
    char a[1000];
    cin.getline(a, 1000);
    
    removeDuplicates(a);
    cout << a << endl;
}