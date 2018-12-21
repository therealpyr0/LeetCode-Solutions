class Functor{
  public:
    map<char,int>m;
    Functor(map<char,int> a){
        m=a;
    }
    
    int operator () (char a,char b) {
        if(m[a]>m[b])return 1;
        if(m[a]==m[b]){
            if(a>b)return 1;
            return 0;
        }
        return 0;
    }
    
    
};

class Solution {
public:
    map<char,int> m;
    string frequencySort(string s) {
        int l=s.length();
        for(int i=0;i<l;i++){
            if(m.find(s[i])==m.end()){
                m[s[i]]=1;
            }
            else m[s[i]]+=1;
        }
        
    string ans;
    ans=s;
        Functor f(m);
    sort(ans.begin(),ans.end(),f);    
    return ans;
        //"2a554442f544asfasssffffasss"
    }
};