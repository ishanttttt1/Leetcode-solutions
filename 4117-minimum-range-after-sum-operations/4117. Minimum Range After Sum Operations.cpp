class Solution{
public:
    int minRange(int a, int b, int c){
        int ans=max(a,max(b,c))-min(a,min(b,c));
        int x=b+c;
        ans=min(ans,max(x,max(b,c))-min(x,min(b,c)));
        int y=a+c;
        ans=min(ans,max(a,max(y,c))-min(a,min(y,c)));
        int q=a+b;
        ans=min(ans,max(a,max(b,q))-min(a,min(b,q)));
        return ans;
    }
};