#include <iostream>
#include <string>
using namespace std;

void maxOccur(string str)
{
    int freq[26] = {0};
    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'a']++;
    } // for maintaining the count of occurrences of characters

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << ans << endl;
    cout << maxF << endl;
}

int main()
{
    string str;
    getline(cin, str);

    maxOccur(str);

    return 0;
}
