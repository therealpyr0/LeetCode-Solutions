class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string s="",temp="";
        int l=S.length(),count=0;
        for(int i=0;i<l;i++){
            if(S[i]!='-'){temp+=S[i];count++;}
        }
        //cout<<temp;
        int rem=count%K,l2=temp.length();
        count=0;
        string ans="";
        for(int i=0;i<rem;i++){ans+=toupper(temp[i]);count++;}
        if(rem!=0 && temp.length()>1)ans+="-";
        for(int j=1;j<=l2/K;j++){
            cout<<"j : "<<j<<endl;
            for(int i=0;i<K;i++){cout<<temp[count];ans+=toupper(temp[count++]);}
            if(j!=l2/K)ans+='-';
            cout<<endl;
            
        }
        return ans;
    }
};