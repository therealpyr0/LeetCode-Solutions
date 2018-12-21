class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x=0,l=nums.size();
        for(int i=0;i<l;i++){
            x^=nums[i];
        }
        return x;
    }
};