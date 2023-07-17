class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::map<char, int> m;
        if(ransomNote.length()>magazine.length())
            return false;
        for(int i = 0; i< magazine.length(); i++){
            m[magazine[i]] = m[magazine[i]] + 1;
        }
        for(int i = 0; i< ransomNote.length(); i++){
            m[ransomNote[i]] = m[ransomNote[i]] - 1;
            if(m[ransomNote[i]] < 0)
                return false;
        }
        return true;
    }
};