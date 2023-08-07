class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_ptr = -1, i = 0;
        while(i <nums.size()){
            if(nums[i] == 0 && zero_ptr == -1){
                zero_ptr = i;
                }
            else {
                if(zero_ptr != -1 && nums[i] != 0 ){
                    nums[zero_ptr] = nums[i];
                    nums[i] = 0;
                    zero_ptr = zero_ptr+1;
                }
            }
            i++;
            
        }
    }
};