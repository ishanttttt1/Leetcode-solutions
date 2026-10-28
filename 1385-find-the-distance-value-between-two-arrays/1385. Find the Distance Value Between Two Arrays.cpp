class Solution{
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d){
        sort(arr2.begin(),arr2.end());
        int count=0;
        for(int i=0;i<arr1.size();i++){
            int x=arr1[i];
            int index=lower_bound(arr2.begin(),arr2.end(),x-d)-arr2.begin();
            if(index<arr2.size()&&arr2[index]<=x+d) {
                continue; 
        } 
        count++;
        }
        return count;     
    }
};