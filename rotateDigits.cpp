class Solution {
public:
    int rotatedDigits(int N) {
        string s;
        int count=0;
        map<char,char> m;
        m['1']='1';m['2']='5';m['0']='0';m['8']='8';m['5']='2';m['6']='9';m['9']='6';
        for(int i=1;i<=N;i++){
            s=to_string(i);
            string temp=s;
            bool f=true;
            for(int j=0;j<s.length();j++){
                if(m.find(s[j])==m.end()){f=false;break;}
                else {s[j]=m[s[j]];}
            }
            if(s.compare(temp)!=0 and f)++count;
        }
    return count;
    }
};