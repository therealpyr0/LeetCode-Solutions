class Solution {
public:
    bool issafe(int x,int y){
        if((x>=0 and x<rows) and (y>=0 and y<cols))return true;
        return false;
    }
    
    int rows;
    int cols;
    
    int getavg(int x,int y,vector<vector<int>>& M){
        int b[]={-1,0,1,-1,0,1,-1,0,1};
        int a[]={-1,-1,-1,0,0,0,1,1,1};
        int count=0,sum=0;
        for(int i=0;i<9;i++){
            if(issafe(x+a[i],y+b[i])){
                count++;
                sum+=M[x+a[i]][y+b[i]];
            }
            //cout<<sum<<"   "<<count<<endl;
        }
        return sum/count;
    }
    
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        //int b={-1,0,1,-1,0,1,-1,0,1};
        //int a={-1,-1,-1,0,0,0,1,1,1};
        //size=M.size();
        rows=M.size();
        cols=M[0].size();
        vector< vector <int> > ans(M.size(),vector<int>(M[0].size(),0));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int x=i,y=j;
                int avg=getavg(x,y,M);
               // cout<<avg<<endl;
                ans[i][j]=avg;
            }
        }
    return ans;
    }
};