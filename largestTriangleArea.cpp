class Solution {
public:
    double getarea(vector<vector<int>> v){
        double area,c,b,a,s;
        vector<int> v1,v2,v3;
        v1=v[0];v2=v[1];v3=v[2];
        
        a=sqrt(pow((v1[0]-v2[0]),2)+pow((v1[1]-v2[1]),2));
        b=sqrt(pow((v2[0]-v3[0]),2)+pow((v2[1]-v3[1]),2));
        c=sqrt(pow((v1[0]-v3[0]),2)+pow((v1[1]-v3[1]),2));
        s=(a+b+c)/2.0;
        if(s<=a or s<=b or s<=c)return 0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
    
    double largestTriangleArea(vector<vector<int>>& points) {
        int l=points.size();
        double area=0,maxarea=0;
        bool f;
        for(int i=0;i<l-2;i++){
            for(int j=i+1;j<l-1;j++){
                for(int k=j+1;k<l;k++){
                    //if(istriangle(points[i],points[j],points[k]));
                    vector<vector<int>> temp;
                    temp.clear();
                    temp.push_back(points[i]);
                    temp.push_back(points[j]);
                    temp.push_back(points[k]);
                    area=getarea(temp);
                    if(area>maxarea)maxarea=area;
                }
            }
        }
    return maxarea;
    }
};