class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0, n =x;
        if(x<0)
            return false;
        else{
            while(n!=0){
                rev = rev * 10 + n%10;
                n = n /10;
            }
        }
        //cout<<"Reverse: "<<rev;
        if((rev - x) == 0)
            return true;
        else
            return false;
    }
};