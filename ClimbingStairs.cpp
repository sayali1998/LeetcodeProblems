class Solution {
public:
    int climbStairs(int n) {
        // If we try to find the sequence then we realise that the number of distinct way come out to be a fibonacci sequence
        int a = 0, b = 1, c = 0;
        if(n == 0 )
            return 0;
        if(n == 1)
            return 1;
        for(int i = 0; i<=n-1;i++){
            c = a+b;
            a = b;
            b =c;
        }
        return c;
    }
};