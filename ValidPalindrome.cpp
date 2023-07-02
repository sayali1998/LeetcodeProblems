class Solution {
public:
    bool isAlpha(char c) {
    // This function returns false if the character is a special character or an empty string.
        if (std::isalnum(c)) {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        if(s == " "){
            return true;
        }
        int l = 0, r = s.length()-1;
        while(l<r){
            while(!isAlpha(s[l]) && l < s.length())
                l = l + 1;
            while(!isAlpha(s[r]) && r>0)
                r = r - 1;
            if(l>r){
                // for string like ".," the above 2 will return l which is greater than r and it will technically result into an empty string. So, we return true.
                return true;
            }
            if(tolower(s[l]) == tolower(s[r])){
                l = l + 1;
                r = r - 1;
            }
            else {
                return false;
            }
        }
        return true;
        }
};