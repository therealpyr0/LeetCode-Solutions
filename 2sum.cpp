#include<>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,s=0,ind;
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<r;i++)m[nums[i]]=i;
        for(int i=0;i<=r;i++){
            s=target-nums[i];
            //cout<<s;
            if(m.find(s)==m.end()){
                
            }
            else{
               ind=m[s];
                //cout<<"found : "<<ind<<" "<<s;
                if(i==ind){
                    continue;
                }
                else{
                    ans.push_back(i);
                    ans.push_back(ind);
                    sort(ans.begin(),ans.end());
                    return ans;
                }
            }
        }

        }
};