class Solution {
public:
    string addBinary(string a, string b) {
        int l1=a.length()-1,l2=b.length()-1;
        int carry=0,digit1=0,digit2=0,sum=0;
        string ans="";
        while(l1>=0 || l2>=0){
            //carry=0;
            if(l1>=0){digit1=chartoint(a[l1]);}
            else {digit1=0;}
            if(l2>=0){digit2=chartoint(b[l2]);}
            else {digit2=0;}
            sum=carry+digit1+digit2;
            //cout<<sum<<"  "<<carry<<endl;
            ans+=inttochar(sum%2);
            carry=sum/2;
           // cout<<carry<<endl;
            l1--;l2--;
        }
        if(carry==1)ans+=inttochar(carry);
        reverse(ans.begin(),ans.end());
        //cout<<ans;
        return ans;
    }
    
    int chartoint(int ch){
        if(ch=='1')return 1;
        return 0;
    }
    
    char inttochar(int num){
        return '0'+num;
    }
};