class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> temp;
        unordered_set<int> s;
        int size=nums.size(),ans=INT_MIN;
        for(int i=0;i<size;i++){
            if(s.find(nums[i])==s.end()){
                s.insert(nums[i]);
                temp.push_back(nums[i]);
                sort(temp.begin(),temp.end());
                if(temp.size()==4){
                    temp.erase(temp.begin()+0);
                }
            }
        }
    if(temp.size()<3)return temp[temp.size()-1];
    return temp[0];    
    }
};