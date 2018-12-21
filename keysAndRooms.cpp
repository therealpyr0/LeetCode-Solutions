class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> s;
        queue<int> q;
        int n=rooms.size()-1;
        unsigned long long int sum=0,total=(n*(n+1))/2;
        int l=rooms[0].size();
        for(int i=0;i<l;i++){
            if(s.find(rooms[0][i])==s.end()){
                //sum+=rooms[0][i];
                //s.insert(rooms[0][i]);
                cout<<rooms[0][i]<<endl;
                q.push(rooms[0][i]);}
        }
        if(l==0 and rooms.size()==1)return true;
        if(l==0 and rooms.size()>1)return false;
        while(!q.empty()){
            int key=q.front();
            q.pop();
            if(s.find(key)==s.end()){
                s.insert(key);
                cout<<key<<endl;
                sum+=key;
                for(int i=0;i<rooms[key].size();i++)q.push(rooms[key][i]);
            }
        }
        cout<<sum<<endl<<total;
        if(sum==total)return true;
        return false;
    }
};