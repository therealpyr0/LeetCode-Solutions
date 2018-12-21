class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int r1,r2,i1,i2;
        r1=getreal(a);
        r2=getreal(b);
        i1=getim(a);
        i2=getim(b);
        string ans="";
        string r,i;
        r=to_string((r1*r2)-(i1*i2));
        i=to_string((r1*i2)+(i1*r2));
        ans+=r+"+"+i+"i";
        return ans;
    }
    
    int getreal(string s){
        int l=s.length(),i;
        string temp;
        for(i=0;i<l;i++){
            if(s[i]=='+')break;
            else temp+=s[i];
        }
        return stoi(temp);
    }
    
    int getim(string s){
        int l=s.length(),i;
        string temp;
        for(i=0;i<l;i++){
            if(s[i]=='+')temp="";
            else temp+=s[i];
        }
        return stoi(temp);
    }
};