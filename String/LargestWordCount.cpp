#include <iostream>
#include <string>
using namespace std;

void largestWordSize(string str, int n)
{
    int maxLen = 0;
    int currLen = 0;

    for (int i = 0; i < n+1; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
            }
            currLen = 0;
        }
        else
        {
            currLen++;
        }
    }

    cout << maxLen << endl;
}

int main()
{
    int n;
    cin >> n;

    cin.ignore();
    string str;
    getline(cin, str);
    cin.ignore();

    largestWordSize(str, n);

    return 0;
}
