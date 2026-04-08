class Solution {
public:
    int n;
    void solve(int i,vector<int>& nums,vector<int>& curr,vector<vector<int>>& ans){
        if(i>=n){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        solve(i+1,nums,curr,ans);
        curr.pop_back();
        solve(i+1,nums,curr,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        vector<int>curr;
        vector<vector<int>>ans;
        solve(0,nums,curr,ans);
        return ans;
    }
};
