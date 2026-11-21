class Solution{
public:
    vector<string> assignUmbrella(vector<int>& rain){
        vector<string>ans;
        int aliceumbrellacount=0;
        int bobumbrellacount=0;
        for(int i=0;i<rain.size()-1;i++){
            if(rain[i]==1 && rain[i+1]==1){
                if(aliceumbrellacount<=bobumbrellacount){
                aliceumbrellacount++;
                ans.push_back("Alice");
            }
            else{
                bobumbrellacount++;
                ans.push_back("Bob");
            }
            }   
            else if
                (rain[i]==1){
                bobumbrellacount++;
                ans.push_back("Bob");
            }
            else{
                ans.push_back("None");
            } 
        }
         if(rain.back()==1){
            bobumbrellacount++;
            ans.push_back("Bob");
        }
        else{
            ans.push_back("None");
        }
        return ans;
    }
};