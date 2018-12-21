class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int rows,cols,a,b,lim;
        rows=A.size();
        for(int i=0;i<rows;i++){
            cols=A[i].size();
            if(cols%2==0)lim=(cols/2)-1;
            else lim=cols/2;
            for(int j=0;j<=lim;j++){
                a=A[i][j];
                b=A[i][cols-1-j];
                A[i][j]=b^1;
                A[i][cols-1-j]=a^1;
            }
        }
    return A;
    }
};