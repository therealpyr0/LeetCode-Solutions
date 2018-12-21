// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low=1,high=n,mid;
        while(1){
            mid=(high-low)/2+(low);
            int ret=guess(mid);
            //cout<<mid<<endl;
            if(ret==0)return mid;
            if(ret==1){low=mid+1;}
            if(ret==-1)high=mid-1;
        }
    }
};