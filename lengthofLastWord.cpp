class Solution {
public:
    int lengthOfLastWord(string s) {
        int last=0;
        int count=0,l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]==' '){
                if(count!=0)last=count;
                count=0;
            }
            else{
                count++;
            }
        }
    if(count==0)return last;
        return count;
    }