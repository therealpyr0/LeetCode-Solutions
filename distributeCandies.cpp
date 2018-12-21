class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int l=candies.size();
        unordered_set<int> s;
        int distinct=0;
        for(int i=0;i<l;i++){
            if(s.find(candies[i])==s.end()){
                 s.insert(candies[i]);
                ++distinct;               
            }
            else{

            }
        }
    
    if(distinct>l/2)return l/2;
    return distinct;
    }
    };