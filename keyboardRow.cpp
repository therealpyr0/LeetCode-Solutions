class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        char row1[]={'q','w','e','r','t','y','u','i','o','p'};
        char row2[]={'a','s','d','f','g','h','j','k','l'};
        char row3[]={'z','x','c','v','b','n','m'};
        int count1=0,count2=0,count3=0;
        vector<string> ans;
        int n=words.size();
        int i;
        for(i=0;i<n;i++){
            count1=count2=count3=0;
            for(int j=0;j<words[i].length();j++){
                //cout<<words[j];
                for(int k=0;k<10;k++){
                    //cout<<words[j];
                    if(words[i][j]==row1[k])count1=1;
                    continue;
                }
                for(int k=0;k<9;k++){
                    if(words[i][j]==row2[k])count2=1;
                    continue;
                }
                for(int k=0;k<7;k++){
                    if(words[i][j]==row3[k])count3=1;
                    continue;
                }

            }
            //cout<<count1<<count2<<count3<<endl;
        if(count1+count2+count3==1){
            ans.push_back(words[i]);
        }
        }
        return ans;
        
    }
};