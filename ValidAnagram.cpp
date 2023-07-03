class Solution {
public:
    bool isAnagram(string s, string t) {
        // If the lengths don't match then s and t cannot be anagrams
        if(s.length() != t.length()){
            return false;
        }
        map<char, int> m;
        for(auto a:s){
            // Calculating frequency
            m[a]++;
        }

        for(int i= 0; i<t.length(); i++){
            if(m.find(t[i]) == m.end())
                return false;
            else
                if(m[t[i]] == 1)
                    m.erase(t[i]);
                else
                    m[t[i]] = m[t[i]] - 1;
        }

        if(m.size() == 0)
            return true;
        else 
            return false;
    }
};