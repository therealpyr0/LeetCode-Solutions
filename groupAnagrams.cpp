class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int l=strs.size();
        string s,temp;
        vector<vector<string>> ans;
        unordered_map<string,vector<string> > m;
        for(int i=0;i<l;i++){
            temp=strs[i];
            sort(temp.begin(),temp.end());
            //if(m.find(temp)==m.end()){
            m[temp].push_back(strs[i]);
            //}
            //else{
             //   m
           // }
        }
        unordered_map<string,vector<string> > ::iterator it=m.begin();
        for(;it!=m.end();++it){
            ans.push_back(it->second);
        }
        return ans;
    }
};