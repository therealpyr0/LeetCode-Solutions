class Solution {
public:
    int firstUniqChar(string s) {
        int ind=-1,l=s.length();
        map<char,int> m;
        int min=INT_MAX;
        int* arr=new int[26];
        for(char ch='a';ch<='z';ch++)arr[ch-'a']=-1;
        for(int i=0;i<l;i++){
            if(m.find(s[i])==m.end()){
                m[s[i]]=1;
                //ind=i;
                arr[s[i]-'a']=i;
            }
            else {
                m[s[i]]+=1;
                  //ind=-1;
                arr[s[i]-'a']=-1;
                 }
        }
        for(char ch='a';ch<='z';ch++){
            if(m.find(ch)==m.end()){
                
            }
            else{
                if(arr[ch-'a']==-1){
                    
                }
                else {
                    if(arr[ch-'a']<min)min=arr[ch-'a'];
                }
            }
        }
        
        if(min==INT_MAX)return -1;
        return min;
    }
};