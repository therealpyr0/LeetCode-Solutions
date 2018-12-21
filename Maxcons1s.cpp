class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones=0,l=nums.size(),i=0,max=0;
        for(i=0;i<l;i++){
            if(nums[i]==1)ones++;
            else{cout<<ones<<endl;if(ones>max)max=ones;ones=0;}
        }
        if(ones>max)return ones;
        return max;
    }
    
};