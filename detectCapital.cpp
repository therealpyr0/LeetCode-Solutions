class Solution {
public:
    bool detectCapitalUse(string word) {
        int s=0,l=word.length(),as=0;
        for(int i=0;i<l;i++){
            if(word[i]>='A' && word[i]<='Z')s+=i+1;
            as+=(i+1);
        }
        if(s==1 || s==as || s==0)return true;
        return false;
        
        
    }
};