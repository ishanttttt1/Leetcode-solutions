class Solution{
public:
    vector<int>scoreValidator(vector<string>& events){
        int scores=0;
        int counters=0;
        for(int i=0;i<events.size();i++){
            if(counters==10){
                return{scores,counters};
            }
            if(events[i]=="W"){
                counters++;
            }
            else if(events[i]=="WD"){
                scores++;
            }else if(events[i]=="NB"){
                scores++;
            }
            else{
                scores=scores+stoi(events[i]);
            }
        }
        return{scores,counters};        
    }
};