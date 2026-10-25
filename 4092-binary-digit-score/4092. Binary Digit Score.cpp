class Solution{
public:
    int calculateScore(int a, int b){
    int setbitsA=0;
    int setbitsB=0;
    while(a!=0){
        setbitsA=setbitsA+a%2;
        a/=2;
    }
    while(b!=0){
        setbitsB=setbitsB+b%2;
        b/=2;
    }
    int score=0;
    if(setbitsA>=setbitsB){
        score=setbitsA*setbitsB;
    }else{
        score=setbitsB/setbitsA;
    }
    return score;
    }
};