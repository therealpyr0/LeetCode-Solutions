class Solution {
public:
    int mySqrt(int x) {
        if(x==0 or x==1)return x;
        unsigned long long int high=x,low=1,mid;int ans;
        while(low<=high){
            mid=(high-low)/2+(low);
            if(mid*mid==x)return mid;
            if(mid*mid<x){
                low=mid+1;
                ans=mid;
            }
            else{
                high=mid-1;
                //ans=mid;
            }
        }
       return ans; 
    }
};