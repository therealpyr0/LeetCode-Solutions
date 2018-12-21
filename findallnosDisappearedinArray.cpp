class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> ans;
        int i,l=nums.size();
        for(i=0;i<l;i++)nums[i]=nums[i]-1;
        for(i=0;i<l;i++)
            nums[nums[i]%l]+=l;
        for(i=0;i<l;i++){
            if(nums[i]/l==0)ans.push_back(i+1);
        }
        return ans;
    }
};