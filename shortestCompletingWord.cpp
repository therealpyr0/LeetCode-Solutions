class Solution {
public:
    bool satisfy(map<char,int>m1,map<char,int>m2){
        for(char i='a';i<='z';i++){
            if(m2[i]<m1[i])return false;
        }
        return true;
    }
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        map<char,int> m,m2;
        for(char i='a';i<='z';i++)m[i]=0;
        int l=licensePlate.length();
        string ans;
        int l1=words.size(),maxlen=INT_MAX;
        for(int i=0;i<l;i++)m[tolower(licensePlate[i])]+=1;
        for(int i=0;i<l1;i++){
            m2.clear();
            for(char j='a';j<='z';j++)m2[i]=0;
            string s=words[i];
            int len=s.length();
            for(int j=0;j<len;j++)m2[tolower(s[j])]+=1;
            if(satisfy(m,m2)){
                if(len<maxlen){
                    maxlen=len;
                    ans=s;
                }
            }
        }
    return ans;
    }
};