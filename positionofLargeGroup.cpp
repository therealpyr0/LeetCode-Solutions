class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector< vector<int> > ans;
        vector<int> temp;
        int start=0,m=2,end=0,l=S.length();
        if(l==0)return ans;
        char cur=S[0];
        for(int i=1;i<l;i++){
            if(S[i]==cur){
                if(i==l-1){
                    cout<<i<<" "<<start<<endl;
                    int diff=i-start;
                    cout<<diff<<endl;
                    if(diff>=m){temp.clear();
                     temp.push_back(start);
                    temp.push_back(i);
                    ans.push_back(temp);
                               }
                }
                
            }
            else {
                cur=S[i];
                end=i-1;
                int diff=end-start;
                
                if(diff>m){
                    //cout<<i<<endl;
                    //m=diff;
                    //ans.clear();
                    temp.clear();
                }
                 if(diff>=m){ 
                     cout<<i<<endl;
                     temp.clear();
                     temp.push_back(start);
                    temp.push_back(end);
                    ans.push_back(temp);
                            }
                
                start=i;
                
            }
        }
    return ans;
    }
};