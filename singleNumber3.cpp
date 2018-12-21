class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0,l=nums.size();
        for(int i=0;i<l;i++)
            x^=nums[i];
        int temp=x,n=0;
        while(1){
            if(temp&1)break;
            n++;temp=temp>>1;
        }
        vector<int> ans;int a=0,b=0;
        for(int i=0;i<l;i++)
        {
            if(nums[i]>>n&1)a^=nums[i];
            else b^=nums[i];
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};