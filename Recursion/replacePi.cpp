void replacepi(string& a, string& output)
{
    if(a.size() < 2)
    {
        output += a;
        return;
    }
    if(a.size() == 2)
    {
        if(a[0] == 'p' && a[1] == 'i')
        {
            output += "3.14";
        }
        else
        {
            output += a;
        }
        return;
    }
    
    if(a[0] == 'p' && a[1] == 'i')
    {
        output += "3.14";
        a = a.substr(2);
    }
    else
    {
        output += a[0];
        a = a.substr(1);
    }
    replacepi(a, output);
    
}

int main() {
    string a;
    cin >> a;
    string output;
    replacepi(a, output);
    cout << output;
}
