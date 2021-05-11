
class Solution {
public:
    vector<string> keys= {"", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> output;
    void solve(string& digits, string ans)
    {
        if(digits.size() == 0)
        {
            output.push_back(ans);
            return ;
        }
        char curr = digits[0];
        string code = keys[curr - '0'];
        string ros = digits.substr(1);
        for(int i=0; i<keys[(curr - '0')].size(); i++)
        {
            solve(ros, ans + code[i]);
        }
    }
    
    
    vector<string> letterCombinations(string digits) {
        string ans;
        if(digits == "")
            return output;
        solve(digits, ans);
        return output;
    }
};
