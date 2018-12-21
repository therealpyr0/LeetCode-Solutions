class Solution {
public:
    string toLowerCase(string str) {
        int l=str.length();
        for(int i=0;i<l;i++){
            str[i]=tolower(str[i]);
        }
        return str;
    }
};