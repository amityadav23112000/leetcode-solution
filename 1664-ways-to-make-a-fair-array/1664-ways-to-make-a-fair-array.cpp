class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        vector<int>os(n);
        vector<int>es(n);
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even+=nums[i];
                
            }
            else {
                odd+=nums[i];
            }
            os[i]=odd;
            es[i]=even;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(i==0){
                int neweven= os[n-1]-os[0];
                int newodd=  es[n-1]-es[0];
                if(neweven==newodd) ans++;
                continue;
            }
            int neweven=   es[i-1]+ os[n-1]-os[i];
                int newodd= os[i-1]+ es[n-1]-es[i];
                if(neweven==newodd) ans++;
                
            
        }
        
        return ans;
    }
};