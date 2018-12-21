class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int i,size=nums.size();
        sort(nums.begin(),nums.end(),mycompare);
        string ans="";
        for(i=0;i<size;i++){
            ans+=to_string(nums[i]);
        }
        string a=filter(ans);
        return a;
    }
    string filter(string a){
        int i=0;
        string temp;
        while(a[i]=='0' && i<a.length()-1){
            i++;
        }
        cout<<i<<endl;
        //if(i==a.lenreturn "0";
        for(int j=i;j<a.length();j++)temp+=a[j];
        return temp;
    }
    
    
    static int mycompare(int a,int b){
        string x=to_string(a);
        string y=to_string(b);
        string xy=x.append(y);
        string yx=y.append(x);
        if(xy.compare(yx)>0)return 1;
        return 0;
    }
};