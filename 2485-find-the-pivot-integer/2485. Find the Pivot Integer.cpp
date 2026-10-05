class Solution{
public:
      int pivotInteger(int n){
        int pivot=sqrt(n*(n+1)/2);
        if(pivot*pivot!=n*(n+1)/2){
            return -1;
        }else{
            return pivot;
        }
    }
};