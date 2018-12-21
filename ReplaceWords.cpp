class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        string ans;
        string temp="";
        map<string,int> m;
        int size=dict.size();
        for(int i=0;i<size;i++)m[dict[i]]=dict[i].length();
        int l=sentence.length();
        for(int i=0;i<l;i++){
            if(sentence[i]==' '){
                //ans+=" ";
                ans+=temp;
                temp="";
                ans+=" ";
                
            }
            else{
                temp+=sentence[i];
                if(m.find(temp)==m.end()){}
                else{
                    while(sentence[i]!=' ' && i<l)i++;
                    //string a="";
                    //a=temp;
                    ans+=temp;temp="";
                    if(i<l)ans+=" ";
                }
            }
        }
        if(temp.length()>0)ans+=temp;
        return ans;
    }
};