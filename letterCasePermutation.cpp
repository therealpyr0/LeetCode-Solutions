class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> words;
        int l=S.length(),vsize=0;
        bool flag=false;
        for(int i=0;i<l;i++){
            if(isChar(S[i])){
                flag=true;
                vsize=words.size();
                if(vsize==0){
                    string temp;
                    temp=S;
                temp[i]=tolower(temp[i]);
                cout<<temp;
                    words.push_back(temp);
                temp[i]=toupper(temp[i]);
                cout<<temp;
                words.push_back(temp);
                    continue;
                }
                for(int j=0;j<vsize;j++){
                    string word;
                    word=words[j];
                    if(isupper(word[i]))word[i]=tolower(word[i]);
                    else word[i]=toupper(word[i]);
                    words.push_back(word);
                }
            }
            else{
                continue;
            }
        }
        
    if(flag)return words;
        words.push_back(S);
        return words;
    }
    
    bool isChar(char ch){
        if( (ch>='a' && ch<='z') ||  (ch>='A' && ch<='Z'))return true;
        return false;
    }
    
    char switchCase(char ch){
        if( (ch>='a' && ch<='z') ||  (ch>='A' && ch<='Z'))return true;
    }
};