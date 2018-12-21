class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        bool flag=false;
        for(int i=left;i<=right;i++){
            int num=i;
            flag=true;
            while(num){
                int rem=num%10;
                if(rem==0){flag=false;break;}
                num=num/10;
                if(i%rem==0)continue;
                else{flag=false;break;}
            }
            if(flag)ans.push_back(i);
        }
        return ans;
    }
};