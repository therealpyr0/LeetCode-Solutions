class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int l=nums.size(),i;
        for(i=0;i<l;i++)
            nums[i]=nums[i]-1;
        int ind=0;
        for(i=0;i<l;i++){
            ind=nums[i];
            nums[ind%l]+=l;
        }
        vector<int> ans;
        for(i=0;i<l;i++)if(nums[i]/l==2)ans.push_back(i+1);
        return ans;
    }
};