class Solution {
public:
    string reverseVowels(string s) {
        int left=0,right=s.length()-1;
        char ch;
        map<char,int> m;
        m['a']=1;m['A']=1;
        m['u']=1;m['U']=1;
        m['o']=1;m['O']=1;
        m['i']=1;m['I']=1;
        m['e']=1;m['E']=1;
        while(left<=right){
            if(m.find(s[left])==m.end()){
                left++;continue;
            }
            if(m.find(s[right])==m.end()){
                right--;continue;
            }
            ch=s[right];
            s[right]=s[left];
            s[left]=ch;
            left++;right--;
           // cout<<s<<endl;
        }
        return s;
    }
};