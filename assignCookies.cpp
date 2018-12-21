class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0,i=0,j=0,l1=g.size(),l2=s.size();
        while(i<l1 and j<l2){
            if(g[i]<=s[j]){
                ++i;++j;++count;
            }
            else{
                ++j;
            }
        }
        return count;
        
    }
};