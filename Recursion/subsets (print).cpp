
class Solution {
public:
    void subss(vector<vector<int>>& res,vector<int>& nums, vector<int> ans, int i) {
        
        if(i == nums.size())
        {
            res.push_back(ans);
            return;
        }
        
        subss(res, nums, ans, i+1);
        ans.push_back(nums[i]);
        subss(res, nums, ans, i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        subss(res, nums, ans, 0);
        return res;
    }
};
