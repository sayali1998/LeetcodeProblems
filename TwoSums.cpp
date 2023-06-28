class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> pair;
       for(int i =0; i< nums.size(); i++){
           auto element = find(nums.begin()+i+1, nums.end(), target-nums[i]);
           if(element!=nums.end()){

               pair.push_back(i);
               pair.push_back(std::distance(nums.begin(), element));
               break;
           }
       }
       return pair;
    }
};