using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int sum = 0;
        int i = 0;
        while(i<s.length()){
            if(m[s[i]]<m[s[i+1]]){
                sum = sum -m[s[i]]+m[s[i+1]];
                i = i+2;
            }
            else{
                sum = sum + m[s[i]];
                i = i+1;
            }
        }
        return sum;
    }
};