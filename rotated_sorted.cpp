class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
            return (nums[0]==target) ? 0 : -1;
        int lo=0,hi=nums.size()-1;
        while(lo <= hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
                return mid;
            // check if the left half is sorted or not
            else if(nums[lo] <= nums[mid]){
                if(target < nums[mid] and nums[lo] <= target)
                    hi=mid-1;
                else
                    lo=mid+1;
            }// else I must assure that the right half is sorted
            else{
                if(target>nums[mid] and target<=nums[hi])
                    lo=mid+1;
                else 
                    hi=mid-1;
            }
        }
        return -1;
    }
};