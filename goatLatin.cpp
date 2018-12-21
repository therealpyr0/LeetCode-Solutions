class Solution {
public:
    string toGoatLatin(string S) {
        string ans;
        char *str;
        unordered_set<char> m;
        m.insert('a');m.insert('o');m.insert('e');m.insert('i');m.insert('u');
        m.insert('A');m.insert('O');m.insert('E');m.insert('I');m.insert('U');
        string temp;
        str=strtok(&S[0]," ");
        int i=0;
        while(str){
            temp="";
            cout<<str<<endl;
            if(m.find(str[0])==m.end()){
                for(int j=1;j<strlen(str);j++){
                    temp+=str[j];
                }
                temp+=str[0];
            }
            else{
                temp+=str;
            }
            //if(m.find(str[0])==m.end())
            temp+="ma";
            for(int j=0;j<i+1;j++)temp+='a';
                        
            str=strtok(NULL," ");

        if(str)ans+=temp+" ";
            else ans+=temp;
            i++;
        }
        return ans;
    }
};