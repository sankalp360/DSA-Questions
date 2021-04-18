class Solution {
public:
    bool isHappy(int n) {
        bool isHappy = false;
        int cnt = 0;
        while(isHappy == false)
        {
            int sum = 0;
            int temp = n;
            
            while(temp != 0)
            {
                sum = sum + ((temp%10) * (temp%10));
                temp = temp / 10;
                
            }
            if(cnt == 10)
            {
                break;
            }
            if(sum == 1)
                return true;
            
            n = sum;
            cnt++;
        }
        return isHappy;
    }
};
