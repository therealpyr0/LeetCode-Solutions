class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0,curcount=1,i=1;
        while(curcount!=0){
            curcount=n/pow(5,i);
            i++;
            ans+=curcount;
        }
        return ans;
    }
    
    unsigned long long int pow(int i,int j){
        unsigned long long int a=1;
        for(int k=1;k<=j;k++)a*=i;
        return a;
    }
};