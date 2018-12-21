#include<math.h>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int num=0,i=0;
        while(n){
            if(n&1)num+=pow(2,31-i);
            i++;
            n=n>>1;
        }
        return num;
    }
};