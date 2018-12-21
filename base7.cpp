class Solution {
public:
    string convertToBase7(int num) {
        string ans="";
        int rem=0;
        bool isneg=false;
        if(num==0)ans="0";
        if(num<0){isneg=true;num=num*-1;}
        while(num){
            rem=num%7;
            num=num/7;
            ans+=to_string(rem);
        }
        if(isneg)ans+="-";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};