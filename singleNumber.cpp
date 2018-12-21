class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        int l=nums.size();
        for(int i=0;i<l;i++)x=x^nums[i];
        return x;
    }
};