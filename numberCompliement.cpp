class Solution {
public:
    int findComplement(int num) {
        int n=num,bits=getbits(num);
        int toxor=0;
        cout<<bits;
        for(int i=0;i<bits;i++){
            toxor=(pow(2,i))+toxor;
        }
        cout<<endl<<toxor;
        return toxor^num;
    }
    
    int getbits(int num){
        int count=0;
        do{
            num=num>>1;
            count++;
        }while(num);
        return count;
    }
};