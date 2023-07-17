class Solution {
public:
    int longestPalindrome(string s) {
        std::map<char, int> m;
        int even = 0, odd = 0;
        for(int i = 0; i<= s.length(); i++){
            if(m.find(s[i]) != m.end())
                m[s[i]] = m[s[i]] + 1;
            else
                m[s[i]] = 1;
        }
        for(auto &it: m){
            cout<<it.first<<","<<it.second;
            if(it.second % 2 == 0)
                even = even + it.second;
            else
                odd = odd+1;
        }
        if(odd-1 != 0)
            return even + 1;
        else
            return even;
    }
};