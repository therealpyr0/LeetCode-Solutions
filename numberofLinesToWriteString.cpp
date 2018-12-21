class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        char ch;
        vector<int> ans;
        map<char,int> m;int lines=0,units=0,cur=0;
        int i=0,size=widths.size();
        for(ch='a';ch<='z';ch++){
            m[ch]=widths[i];
            i++;
        }
        int l=S.length();
        for(i=0;i<l;i++){
            cur=m[S[i]];
            if(cur+units<100){
                units+=cur;
                continue;
            }
            else if(cur+units>100){
                lines++;
                units=cur;
            }
            else{
                lines++;units=0;
            }
        }
        ans.push_back(++lines);
        ans.push_back(units);
        return ans;
    }
};