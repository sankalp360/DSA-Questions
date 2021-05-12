class Solution {
public:
    void solve(vector<int>& nums, vector<int> op, vector<vector<int>>& subset, int i)
    {
        if(nums.size() == i)
        {
            subset.push_back(op);
            return;
        }
        int curr = nums[i];
        
        solve(nums, op, subset, i+1);
        op.push_back(curr);
        solve(nums, op, subset, i+1);
        
        
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subset;
        vector<int> op;
        int i = 0;
        solve(nums, op, subset, i);
        return subset;
    }
};
