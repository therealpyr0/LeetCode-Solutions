class Solution {
public:
    int addDigits(int num) {
        int n=num,s=0,x=num;
        while(n>=10){
            x=n;
            while(x){
                s+=x%10;
                x=x/10;
            }
            n=s;
            s=0;
            //cout<<s<<endl;
        }
    return n;
    }
};