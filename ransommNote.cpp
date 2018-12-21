class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m1;
        map<char,int> m2;
        char ch;
        int i=0;
        for(ch='a';ch<='z';ch++){
            m1[ch]=0;
            m2[ch]=0;
        }
        int l=ransomNote.length();
        for(i=0;i<l;i++)m1[ransomNote[i]]+=1;
        l=magazine.length();
        for(i=0;i<l;i++)m2[magazine[i]]+=1;
        for(ch='a';ch<='z';ch++){
            if(m1[ch]>m2[ch])return false;
        }
        return true;
    }
};