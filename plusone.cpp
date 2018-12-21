class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1,l=digits.size();
        vector<int> ans;
        for(int i=l-1;i>=0;i--){
            digits[i]=digits[i]+carry;
            carry=digits[i]/10;
            digits[i]%=10;
        }
        //cout<<carry;
       if(carry==0) return digits;
        digits.insert(digits.begin(),carry);
        return digits;
    }
};