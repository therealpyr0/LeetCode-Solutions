class Solution {
public:
    unordered_set<long int> primes;
    map<long int,int> m;
    bool isprime(long int n ){
        if(n==1)return false;
        if(n==2 or n==3)return true;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)return false;
        }
        return true;
    }
    void setprimes(int L,int R){
        long int imax=10000;
        primes.insert(2);
        primes.insert(3);
        for(int i=L;i<=R;i++){
            if(isprime(i))primes.insert(i);
        }
    }
    
    void setbits(int L,int R){
        for(int i=L;i<=R;i++){
            int count=0,n=i;
            while(n){
                if(n&1)count++;
                n=n>>1;
            }
            m[i]=count;
        }
    }

    int getbits(int n){
            int count=0;
            while(n){
                if(n&1)count++;
                n=n>>1;
            }
        return count;
    }
    
    
    
    int countPrimeSetBits(int L, int R) {
        setprimes(L,R);
        setbits(L,R);
        int count=0,c;
        for(int i=L;i<=R;i++){
            c=getbits(i);
            if(isprime(c)){count++;
                          cout<<c<<endl;}
        }
    return count;
    }
};