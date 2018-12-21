class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m1;
        map<char,int> m2;
        int l=s.length();
        for(char ch='a';ch<='z';ch++){
            m1[ch]=0;
            m2[ch]=0;
            
        }
        for(int i=0;i<l;i++){
            m1[s[i]]+=1;
        }
        l=t.length();
        for(int i=0;i<l;i++){
            m2[t[i]]+=1;
        }
        //bool flag=true;
         for(char ch='a';ch<='z';ch++){
         if(m1[ch]!=m2[ch])return false;
         }
        return true;
    }
};