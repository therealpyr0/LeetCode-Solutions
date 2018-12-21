class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int size=ops.size(),ans=0;
        for(int i=0;i<size;i++){
            if(ops[i]=="C"){
                if(!s.empty()){
                    ans-=s.top();
                    int a=s.top();
                    s.pop();
                }
            }
            else if(ops[i]=="D"){
                if(!s.empty()){
                    ans+=(2*s.top());
                    s.push(2*s.top());
                }
            }
            else if(ops[i]=="+"){
                int a,b;
                if(!s.empty())a=s.top();
                s.pop();
                if(!s.empty())b=s.top();
                s.pop();
                s.push(b);
                s.push(a);
                s.push(a+b);
                ans+=a+b;
            }
            else{
                int a=stoi(ops[i]);
                s.push(a);
                ans+=a;
            }
            
        }
    return ans;
    }
};