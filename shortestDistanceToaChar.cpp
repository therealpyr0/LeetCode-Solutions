class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> ans;
        vector<int> ind;
        //map<char,vector<int>> m;
        int l=S.length();
        for(int  i=0;i<l;i++)if(S[i]==C)ind.push_back(i);
        for(int i=0;i<l;i++){
            if(S[i]==C)ans.push_back(0);
            else{
                int m=INT_MAX;
                for(int j=0;j<ind.size();j++){
                    if(abs(i-ind[j])<m)m=abs(i-ind[j]);
                }
            ans.push_back(m);
            }
        }
        return ans;
    }
};