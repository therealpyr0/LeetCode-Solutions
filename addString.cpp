class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0,digit1=0,digit2=0,sum=0,nextcarry=0,temp=0;
        int l1=num1.length();
        int l2=num2.length();
        string ans="";
        int i=l1-1;
        int j=l2-1;
        while(i>=0 || j>=0){
            if(i>=0){digit1=num1[i]-'0';}
            else digit1=0;
            if(j>=0){digit2=num2[j]-'0';}
            else digit2=0;
            cout<<digit1<<" "<<digit2<<endl;
            temp=digit1+digit2+carry;
            if(temp>9){sum=(sum*10)+temp%10;carry=temp/10;
                       ans+=to_string(temp%10);}
            else {carry=0;ans+=to_string(temp);}
            i--;j--;
        }
        if(carry!=0){sum=(sum*10)+carry;ans+=to_string(carry);}
        cout<<ans;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};