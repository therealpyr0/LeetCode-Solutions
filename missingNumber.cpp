class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0,l=nums.size();
        for(int i=1;i<=l;i++)
            x=x^(nums[i-1])^i;
    
    return x;}
};