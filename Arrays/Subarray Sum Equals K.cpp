class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int, int> prefix;
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            if(sum == k)
                cnt++;
            
            cnt += prefix[sum - k];
            prefix[sum]++;
        }
        
        return cnt;
        
    }
};
