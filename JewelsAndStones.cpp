class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int l1=J.length(),l2=S.length();
        int count=0;
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(J[i]==S[j])count++;
            }
        }
        return count;
    }
};