class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j;
        int sum=0,n;
        n=nums.size();
        for(i=0;i<n;i+=2)
        {
            sum+=nums[i];
        }
        return sum;
    }
};