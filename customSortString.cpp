class Functor{
    public:
    unordered_map<char,int> m;
    Functor(unordered_map<char,int> order){
        m=order;
    }
    
    int operator() (char a,char b) {
        int x=m[a],y=m[b];
        if(x>y)return 1;
        return 0;
    }
};

class Solution {
    unordered_map<char,int> order;
    public:

  int mycomp(char a,char b){
        int x=order[a];
        int y=order[b];
        if(x>y)return 1;
        else return 0;
    }
    string customSortString(string S, string T) {
       
        int l=S.length();
        for(int i='a';i<='z';i++)
            order[i]=0;
        for(int i=0;i<l;i++)order[S[i]]=l-i;
        string ans=T;
        //Functor f=new Functor(order);
       // sort(ans.begin(),ans.end(),Functor(order));
        Functor f(order);
        sort(ans.begin(),ans.end(),f);

        return ans;
    }
};