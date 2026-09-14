class Solution{
public:
bool isValid(vector<int>&piles,int h,int speed){
    long long totalhours=0;
    for(int pile:piles){
        totalhours=totalhours+(pile+speed-1)/speed;
        if(totalhours>h){
            return false;
        }
    }
        return totalhours<=h;
}
    int minEatingSpeed(vector<int>& piles, int h){
        int low=1;
        int high = *max_element(piles.begin(), piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            if(isValid(piles,h,mid)){
                high=mid;
            }else{
                low=mid+1;
            }
        }
            return low;
    }
};