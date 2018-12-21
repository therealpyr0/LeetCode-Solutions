class Solution {
public:
    bool judgeSquareSum(int c) {
        int sq=getsqrt(c);
        bool flag=false;
        unordered_set<unsigned long long int> m;
        for(int i=0;i<=sq;i++)m.insert(i*i);
        //for(int i=0;i<=sq;i++)cout<<m[i*i]<<"  ";cout<<endl;
        for(int i=0;i<=sq;i++){
            //cout<<"finding  : "<<c-m[i]<<endl; 
            
            if(m.find(c-(i*i))==m.end()){
                continue;
            }
            else{
                //cout<<c<<" "<<m[i]<<" "<<c-m[i]<<" "<<i<<endl;
                //cout<<c<<" "<<c-(i*i)<<" "<<i<<endl;
                flag=true;
                //cout<<"found";
                break;
            }
        }
    return flag;
    }
    
    int getsqrt(int num)
    {
        return sqrt(num);
    }
};