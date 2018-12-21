class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> m;
        vector<string> ans;
        int minind=INT_MAX,i,l1=list1.size(),l2=list2.size(),sum=0;
        for(i=0;i<l1;i++)m[list1[i]]=i;
        for(i=0;i<l2;i++){
            if(m.find(list2[i])==m.end()){
                
            }
            else{
                sum=i+m[list2[i]];
                if(sum<minind){
                    ans.clear();
                    ans.push_back(list2[i]);
                    minind=sum;
                }
                else if(sum==minind){
                    ans.push_back(list2[i]);
                }
                else{
                    
                }
            }
        }
        
      return ans;  
    }
};