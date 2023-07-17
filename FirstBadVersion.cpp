// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long start = 2, end = n;
        long mid = ( start + end ) / 2;
        if(isBadVersion(start-1))
            return start-1;
        while(start<=end){
            // cout<<"Inside While";
            if(isBadVersion(mid))
                if(!isBadVersion(mid-1))
                    return mid;
                else{
                    end = mid-1;
                }
            else{
                start = mid+1;
            }
            mid = ( start + end ) / 2;
        }
        return 0;
    }
};