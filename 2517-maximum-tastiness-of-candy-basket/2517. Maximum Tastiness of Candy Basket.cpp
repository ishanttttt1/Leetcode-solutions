class Solution{
public:
    bool achievable(vector<int>&price,int k,int mid){
        int count=1;
        int prev=price[0];
        for(int i=0;i<price.size();i++){
            if(price[i]-prev>=mid){
                count++;
                prev=price[i];
            }
            if(count==k){
                return true;
            }
        }
        return false;
    }
    int maximumTastiness(vector<int>& price, int k){
        sort(price.begin(),price.end());
        int low=0;
        int high=*max_element(price.begin(),price.end())-*min_element(price.begin(),price.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(achievable(price,k,mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};