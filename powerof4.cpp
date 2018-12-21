class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==0)return false;
        if(num==1)return true;
        while(1){
            if(num%4!=0)return false;
            else{
                num=num/4;
            }
            if(num==1)return true;
        }
    }
};