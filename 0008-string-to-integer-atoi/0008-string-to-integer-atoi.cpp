class Solution {
public:
    int myAtoi(string s) {
        if(s.length() == 0) return 0;
        
        int n = s.length();
        
        // 1. to eliminate whitespaces
        int i = 0;
        while(i < n && s[i] == ' '){
            i++;
        }
        s = s.substr(i); //from i (where no whitespace -> till end of string)
        
        // 2. checking sign
        int sign = +1;
        long ans = 0;
        
        if(s[0] == '-') sign = -1;
        
        // if there is a sign present before digit, "-42", start from index 1 instead of 0, else, start from index 0
        i = (s[0] == '+' || s[0] == '-') ? 1 : 0;
        
        
        // 3. 4. 5. 
        while(i < s.length()){
            // 3. break loop if whitespace/non-digit is reached.
            if(s[i] == ' ' || !isdigit(s[i])) break;
             
            ans = ans * 10 + s[i] - '0'; //convert to ASCII numerical value. So, subtract '0'.
            
            // 5. clamping integer in range from INT_MIN to INT_MAX
            if(sign == -1 && -1 * ans < INT_MIN) return INT_MIN;
            if(sign == 1 && ans > INT_MAX) return INT_MAX;
            
            //keep iterating to next character if no discrepancies
            i++;
        }
        return (int)(sign * ans);        
    }
};