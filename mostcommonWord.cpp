class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban;
        int l=banned.size();
        for(int i=0;i<paragraph.size();i++)paragraph[i]=tolower(paragraph[i]);
        for(int i=0;i<l;++i){
            string s=banned[i];
            for(int j=0;j<s.length();j++){
                s[j]=tolower(s[j]);
            }
            banned[i]=s;
        }
        string ans;
        int minimum=INT_MIN;
        map<string,int>m;
        for(int i=0;i<l;i++)ban.insert(banned[i]);
        char *p;
        p=strtok(&paragraph[0]," ,.!'@#$%^&*()?[]{};:");
        while(p!=NULL){
            if(ban.find(p)==ban.end()){
                if(m.find(p)==m.end()){
                    m[p]=1;
                }
                else{
                    m[p]+=1;
                }
                if(m[p]>minimum){
                    minimum=m[p];
                    ans=p;
                }
            }
            p=strtok(NULL," ,.!'@#$%^&*()?[]{};:");
        }
    return ans;
    }
};