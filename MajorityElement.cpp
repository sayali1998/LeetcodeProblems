class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Majority element is the element that occurs more that n/2 times
        map<int, int> m;
        int majCount = nums.size() / 2;
        for(int i =0; i< nums.size(); i++){
            m[nums[i]] = m[nums[i]] + 1;
            if(m[nums[i]] > majCount)
                return nums[i];
        }
        return 0;
    }
};