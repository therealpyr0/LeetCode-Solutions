class Solution {
public:
    int countPrimes(int n) {
        
        int i,count=2;
        if(n==3)return 1;
        if(n==1 || n==0 || n==2 )return 0;
        if(n==4)return 2;
        for(i=4;i<n;i++){
            if(i%2==0 || i%3==0)continue;
            if(isprime(i))count++;
        }
        return count;
    }
    
    
    bool isprime(int num){
        if(num==1 || num==0)return false;
       int  sq=sqrt(num)+1;
        for(int i=2;i<=sq;i++)if(num%i==0)return false;
        return true;
    }
};