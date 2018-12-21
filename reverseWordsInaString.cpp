class Solution {
public:
    string reverseWords(string s) {
        string temp="",rev="";
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]==' '){
                reverse(temp.begin(),temp.end());
                rev+=temp;
                temp="";
                rev+=" ";
            }
            else{
                temp+=s[i];
            }
        }
        if(temp.length()!=0){reverse(temp.begin(),temp.end());rev+=temp;}
        //reverse(rev.begin(),rev.end());
        return rev;
    }
};