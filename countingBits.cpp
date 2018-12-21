class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        int i,j,count=0;
        for(i=0;i<=num;i++)ans.push_back(countbits(i));
        return ans;
    }
    
    int countbits(int n){
        int count=0;
        while(n){
            if(n&1)count++;
            n=n>>1;
        }
        return count;
    }
};