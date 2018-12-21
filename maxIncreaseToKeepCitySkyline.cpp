class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        map<int,int> row,col;
        int maxrow=INT_MIN,maxcol=INT_MIN;
        for(int i=0;i<grid.size();i++){
            maxrow=0;
            maxcol=0;
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]>maxrow)maxrow=grid[i][j];
                if(grid[j][i]>maxcol)maxcol=grid[j][i];
            }
            row[i]=maxrow;
            col[i]=maxcol;
        }
        
       // for(int i=0;i<grid.size();i++){
        //cout<<row[i]<<"  "<<col[i]<<endl;   
        //}
        
        
        int count=0;
        int m=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(row[i]>=col[j])m=col[j];
                else m=row[i];
             if((m-grid[i][j])>0)count+=(m-grid[i][j]);
                else count+=0;
            }
        }
    return count;
    }
};