class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int count=0;
        map<int,string> m;
        map<string,int> m1;
        string codes[]={".-", "-...", "-.-." ,"-..", ".", "..-.","--.","....","..",".---", "-.-",".-..","--","-.","---",".--.","--.-", ".-.","...", "-","..-","...-",".--", "-..-","-.--", "--.."};
        int l=words.size();
        for(int i=0;i<26;i++){
            m[i]=codes[i];
        }
        string temp;
        for(int i=0;i<l;i++){
            temp="";
            string word;
            char ch;
            int l2=words[i].length();
            word=words[i];
            for(int j=0;j<l2;j++){
                ch=word[j]-'a';
                temp+=m[ch];
            }
            if(m1.find(temp)==m1.end()){
                m1[temp]=1;
                count++;
            }
            else{
                continue;
            }
            
        }
        
        return count;
    }
};