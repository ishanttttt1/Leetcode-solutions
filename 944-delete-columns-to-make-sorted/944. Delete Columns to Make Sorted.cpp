class Solution{
public:
    int minDeletionSize(vector<string>& strs){
        int deleted_Count=0;
        int rows=strs.size();
        int columns=strs[0].size();
        for(int j=0;j<columns;j++){
            for(int i=0;i<rows-1;i++){
                if(strs[i][j]>strs[i+1][j]){
                    deleted_Count++;
                    break;
                }
            }
        }
        return deleted_Count;
    }
};