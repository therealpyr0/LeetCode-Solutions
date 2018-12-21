class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int a,b;
        for(int i=0;i<rows;i++){
            a=i;b=0;
            while(a<rows-1 && b<cols-1){
                if(matrix[a][b]!=matrix[a+1][b+1])return false;
                a++;b++;
            }
        }
        for(int i=0;i<cols;i++){
            a=0;b=i;
            while(a<rows-1 && b<cols-1){
                if(matrix[a][b]!=matrix[a+1][b+1])return false;
                a++;b++;
            }
        }
        return true;
    }
};