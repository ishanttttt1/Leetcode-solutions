class Solution{
public:
    int countNegatives(vector<vector<int>>& grid){
        int ans=0;
        for(int row=0;row<grid.size();row++){
            int low=0;
            int high=grid[row].size()-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(grid[row][mid]<0){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            ans=ans+grid[row].size()-low;
        }
        return ans; 
    }

};