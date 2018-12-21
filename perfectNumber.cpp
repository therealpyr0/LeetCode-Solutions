class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0,half=num/2,start=0;
        sum=1;
        int inc=0;
        if(num==1)return false;
        //if(num%2==0){sum+=2;}
       // if(num%3==0){sum+=3;}
        if(isEven(num)){start=2;inc=1;}
        else{start=3;inc=2;}
        for(int i=start;i<=half;i+=inc){
            if(num%i==0){sum+=i;
                         //cout<<i<<endl;
                        }   
        }
        if(sum==num)return true;
        return false;
    }
    
    bool isEven(int num){
        if(num%2==0)return true;
        return false;
    }
};