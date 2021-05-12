int movex(string input, string& output)
{
    if(input.size() == 0)
    {
        return 0;
    }
    
    int ans = movex(input.substr(1), output);
    if(input[0] == 'x')
    {
        output[output.size() - ans - 1] = 'x'; 
        return 1 + ans;
    }
    
    output[input.size()-1] = input[0];
        
    
    return ans;   
}

int main()
{
    string s;
    cin >> s;
    string output;
    for(int i=0; i<s.size(); i++)
    {
        output += '0';
    }
    movex(s, output);
    cout << output;
}
