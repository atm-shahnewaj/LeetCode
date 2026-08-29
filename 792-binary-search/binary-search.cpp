class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;

        int found=0;
        int mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]==target)
            {
                found=1;
                break;
            }
            if(nums[mid]>target)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        if(found==1)
        {
            return mid;
        }
        else
        {
            return -1;
        }
    }

};