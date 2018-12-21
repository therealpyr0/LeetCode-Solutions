class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=-1,cur;
        while(n){
            cur=n&1;
            //cout<<n<<endl;
            if(cur==prev)return false;
            prev=cur;
            n=n>>1;
        }
    return true;
    }
};