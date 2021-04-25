class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;
        int temp = n;
        while(n != 0)
        {
            ans = (ans + (n % k));
            n = n / k;
        }
        return ans;
        
        
    }  
    
};
