class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0,r=nums.size()-1,i=0,len=nums.size(),count=0;
        int temp;
        while(l<=r){
            if(nums[l]==val){temp=nums[r];nums[r]=nums[l];nums[l]=temp;r--;}
            else{count++;l++;}
        }
        return count;
    }
};