class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        vector<vector<int>> ans;
        
        for(int i = 0; i<n; i++){
            int a = nums[i];
            int rem = -a;
            
            int start = i + 1, end = n - 1;
            
            while(start < end){
                if(nums[start] + nums[end] == rem){
                    ans.push_back({nums[i], nums[start], nums[end]});
                    while(start < end && nums[start] == nums[start+1]) start++;
                    while(start < end && nums[end] == nums[end-1]) end--;
                    start++;
                    end--;
                } 
                else if(nums[start] + nums[end] < rem)
                    start++;
                else
                    end--;
            }
            while(i + 1 < n && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};