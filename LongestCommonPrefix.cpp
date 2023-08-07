// My initial approach was sorting the strs based on their lengths, but I needed to sort it alphabetically
class Solution {
public:   
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0], second = strs[strs.size()-1];
        string res = "";
        int length;
        if(first.length() < second.length())
            length = first.length();
        else
            length = second.length();
        for(int i= 0; i<length; i++){
            if(first[i] == second[i])
                res = res + first[i];
            else 
                break;
        }
        return res;
    }
};
