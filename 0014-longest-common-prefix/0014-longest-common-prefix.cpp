class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        
        string ans = "";
        
        // for traversing all characters of first string
        for(int i = 0; i<strs[0].length(); i++){
            char prefix = strs[0][i];
            
            bool match = true;
            
            // for comparing prefix with remaining strings
            for(int j = 1; j<strs.size(); j++){
                // if match not found
                if(strs[j].length() < i || prefix != strs[j][i]){
                    match = false;
                    break;
                }
            }
            if(match == false)
                break;
            
            else 
                ans.push_back(prefix);
        }
        return ans;        
    }
};