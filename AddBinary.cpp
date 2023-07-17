using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int rem = 0;
        string zero = "", result = "";
        long zeroes = abs(static_cast<long>(a.length() - b.length()));
        for (int i = 0; i < zeroes ; ++i) {
            zero += '0';
        }
        if(a.length()<b.length())
            a = zero + a;
        else
            b = zero + b;
        for(int i = a.length()-1; i >=0 ; i--){
            if(a[i] == '1' && b[i] == '1'){
                if(rem == 1)
                    result = '1'+ result;
                else
                    result = '0'+ result;
                rem = 1;
            }
            else if(a[i] == '1' || b[i] == '1')
            {
                if(rem == 1){
                    result = '0'+ result;
                    rem = 1;
                }
                else
                    result = '1'+ result;
            }
            else{
                if(rem == 1)
                    result = '1'+ result;
                else   
                    result = '0'+ result;
                rem = 0;
            }
        }
        if(rem == 1)
            return '1' + result;
        return result;
    }
};