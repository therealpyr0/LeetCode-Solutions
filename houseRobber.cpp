class Solution {
public:
    int max(int a,int b){
        if(a>b)return a;
        return b;
    }
    int rob(vector<int>& nums) {
        int inc,ex=0,temp=0,size=nums.size();
        if(size==0)return 0;
        if(size==1)return nums[0];
        inc=nums[0];
        for(int i=1;i<size;i++){
            temp=max(inc,ex);
            inc=ex+nums[i];
            ex=temp;
        }
    return max(inc,ex);
    }
};