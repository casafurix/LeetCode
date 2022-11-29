class Solution {
public:
    int romanToInt(string s) {
        //smaller to larger -> add them up
        //larger to smaller -> subtract smaller
        //take CMXCVIII = 998 for example
        
        unordered_map<char, int> roman = {
  {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
};

        int result = 0;
        
        for(int i = 0; i<s.length(); i++){
            if((i+1) < s.length() && roman[s[i]] < roman[s[i+1]])
            {
                result -= roman[s[i]]; // subtracting smaller number
            }
            else   
                result += roman[s[i]]; //add
        }
        return result;
    }
};