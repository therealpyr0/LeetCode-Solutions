class Solution {
public:
    bool checkifanagram(map<char,int> a, map<char,int> b){
        for(char ch='a';ch<='z';ch++){
            if(a[ch]!=b[ch]){//cout<<a[ch]<<"  "<<b[ch]<<endl;
                             return false;}
        }
        return true;
        
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        map<char,int> m,finalmap;
        for(char ch='a';ch<='z';ch++){m[ch]=0;finalmap[ch]=0;}
        for(int i=0;i<p.length();i++)
            finalmap[p[i]]+=1;
        int start=0,end=p.length()-1;
        int l=s.length();
        for(int i=0;i<=end;i++)m[s[i]]+=1;
        while(end<l){
            //cout<<start<<"  "<<end<<endl;
            if(checkifanagram(m,finalmap))ans.push_back(start);
            m[s[start]]-=1;
            start++;end++;
            if(end<l)m[s[end]]+=1;
            
        }
        return ans;
    }
};