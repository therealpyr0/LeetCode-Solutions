class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i;
        string temp="";
        vector<string> answer;
        for(i=1;i<=n;i++){
            temp="";
            if(i%3==0)temp+="Fizz";
            if(i%5==0)temp+="Buzz";
            if(i%5!=0 && i%3!=0)temp+=to_string(i);
            answer.push_back(temp);
        }
        return answer;
    }
    
};