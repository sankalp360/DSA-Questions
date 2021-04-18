 int firstUniqChar(string s) {
        unordered_map<int, int> m;
        
        for(int i=0; i<s.size(); i++)   
        {
            m[s[i]]++;
        }
        
        for(int i=0; i<s.size(); i++)
        {
            if(m[s[i]] < 2)
            {
                return i;
            }
        }
        
        return -1;
        
    }
