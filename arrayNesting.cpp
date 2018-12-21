class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int count=0,max=0,start=0,ind=0;
        for(int i=0;i<nums.size();i++){
            start=i;
            count=0;
           
    while(1){            
        if(nums[start]>=0){
                count++;
                ind=start;
                start=nums[start];
                nums[ind]=-1;
            }
            else {break;}
        }
            if(count>max)max=count;continue;
        }
        return max;
    }
};