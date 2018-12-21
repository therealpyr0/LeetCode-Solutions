class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       // unordered_set<num> s;
        bool f=true;
        vector<int> temp;
        int target=0;
        string str;
        unordered_set<string> aset;
        vector< vector<int> > ans;
        int l=nums.size();
        if(l==0)return ans;
        for(int i=0;i<l;i++)if(nums[i]!=nums[0])f=false;
        if(f and target==nums[0]*3 and l>=3){
            temp.push_back(nums[0]);
                          temp.push_back(nums[0]);
                                        temp.push_back(nums[0]);
                                            ans.push_back(temp);return ans;
        }
        int left,right,s=0;
        for(int i=0;i<l-2;i++){
            left=i+1;
            right=l-1;
            target=0-(nums[i]);
            while(left<right){
                s=nums[right]+nums[left];
                if(s==target){
                    temp.clear();
                    temp.push_back(nums[i]);temp.push_back(nums[left]);temp.push_back(nums[right]);
                    str=to_string(nums[i])+","+to_string(nums[left])+","+to_string(nums[right]);
                    if(aset.find(str)==aset.end()){ans.push_back(temp);
                    aset.insert(str);}
                    //break;
                    left++;right--;
                    continue;
                }
                else{if(s<target)left++;
                else right--;}
            }
        }
        return ans;
    }
};