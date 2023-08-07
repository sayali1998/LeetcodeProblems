class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int mul_two;            // we used this var to store the latest multiple of 2
        ans.push_back(0);       //adding answer if n = 0
        if(n == 0)
            return ans;
        ans.push_back(1);       //adding answer if n = 1
        if(n == 1)
            return ans;
        ans.push_back(1);
        if(n == 2)
            return ans;
        mul_two = 2;
        for(int i = 3; i<=n; i ++){
            if(i != mul_two * 2){
                ans.push_back(ans[mul_two]+ans[i-mul_two]);
            }
            else{
                ans.push_back(1);
                mul_two = i;
            }
        }
        return ans;
    }
};
