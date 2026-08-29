class Solution{
public:
    int minBishopMoves(vector<int>& source, vector<int>& target){
        int srr=source[0],sc=source[1];
        int trr=target[0],tc=target[1];
        if((srr+sc)%2!=(trr+tc)%2)
            return -1;
        if(abs(srr-trr)==abs(sc-tc))
            return 1;
        return 2;
    }
};