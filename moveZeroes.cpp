class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=nums.size(),ind=0;
        for(int i=0;i<l;i++){
            if(nums[i]==0){
                continue;
            }
            else{
                nums[ind]=nums[i];
                ind++;
            }
        }
        for(int i=ind;i<l;i++)nums[i]=0;
        #return nums;
    }
};