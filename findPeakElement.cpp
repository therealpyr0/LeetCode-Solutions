class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak=0,max=INT_MIN;
        int i,l=nums.size();
        for(i=0;i<l;i++){
            if(i==0){
                if(nums[i]>nums[i+1])peak=i;
                continue;
            }
            if(i==l-1){
                if(nums[i]>nums[i-1])peak=i;
            continue;}
            if(nums[i]>nums[i-1] && nums[i]>nums[i-1])peak=i;
            
        }
        return peak;
    }
};