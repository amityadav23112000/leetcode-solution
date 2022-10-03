class Solution {
public:
    int minCost(string colors, vector<int>& neededtime) {
        int j=1;
        int i=0;
        int ans=0;
        while(i<size(colors) && j<colors.size()){
            if(colors[i]!=colors[j]){
                i=j;
                j++;
            }
            else {
                if(colors[i]==colors[j]){
                    if(neededtime[i]<=neededtime[j]){
                        ans+=neededtime[i];
                         i=j;
                        j++;
                    }
                    else {
                        ans+=neededtime[j];
                        j++;
                    }
                }
            }
            
        }
        return ans;
    }
};