class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' )st.push(s[i]);
            else{
                if(!st.empty()){
                    cout<<st.top()<<" "<<s[i]<<endl;
                if(s[i]==')' && st.top()=='('){st.pop();cout<<"here";continue;}
                //else{ return false;}
                else if(s[i]=='}' && st.top()=='{'){st.pop();cout<<"here";continue;}
                //else{ return false;}
                else if(s[i]==']' && st.top()=='['){st.pop();cout<<"here";continue;}
                else{ return false;}
                }
                else return false;
            }
        }
        if(st.empty())return true;
        return false;
    }
};