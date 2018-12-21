class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur,len=0,prev=INT_MIN,l=nums.size();
        for(int i=0;i<nums.size();i++){
            cur=nums[i];
            if(cur!=prev)len++;
            else{
                nums.erase(nums.begin()+i);
                cout<<nums.size();
                i--;
            }
            prev=cur;
        }
        return len;
    }
};