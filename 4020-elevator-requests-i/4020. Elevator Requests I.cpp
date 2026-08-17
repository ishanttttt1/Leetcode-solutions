class Solution{
public:
    int elevatorRequests(int n, vector<int>& requests){
        int currents=0;
        int time=0;
        for(int i=0;i<requests.size();i++){
            time=time+abs(currents-requests[i]);
            currents=requests[i];
        }
        return time;
    }
};