class Solution {
public:
    char findTheDifference(string s, string t) {
        int l=s.length(),x=0;
        x=t[l];
        char ch=0;
        for(int i=0;i<l;i++)x=x^s[i]^t[i];
        ch=x;
        return ch;
    }
};