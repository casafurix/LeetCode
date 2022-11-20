class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> m;
      vector<int> res;
      for(int i = 0; i<nums.size(); i++){  
          int diff = target - nums[i];
          if(m.find(diff) != m.end() && i != m.find(diff)->second)
          {
              res.push_back(i);
              res.push_back(m.find(diff)->second);
              return res;
          }
          m[nums[i]] = i;
      }
        return res;
    }
};