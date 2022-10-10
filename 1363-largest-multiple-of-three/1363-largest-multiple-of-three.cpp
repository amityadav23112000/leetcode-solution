class Solution {
public:
    string largestMultipleOfThree(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i]; 
        }
        sort(nums.begin(),nums.end());
        if(sum%3==0){
           string  str="";
            if(nums[n-1]==0) return to_string(0);
            for(int i=n-1;i>=0;i--){
                str+=nums[i]+'0';
            }
            return str;
        }
        else if(sum%3==1){
            int flag=0;
            for(int i=0;i<n;i++){
                if(nums[i]%3==1){
                    flag=1;
                    nums[i]=-1;
                    break;
                }
            }
            if(flag==0){
                vector<int>temp(2,-1);
                
                for(int i=0;i<n;i++){
                    if(nums[i]%3==2){
                        if(temp[0]==-1){
                            temp[0]=i;
                        }
                        else{
                            temp[1]=i;
                            break;
                        }
                    }
                }
            if(temp[1]==-1) return "";
            else {
                nums[temp[0]]=-1;
                nums[temp[1]]=-1;
            }
                
            
            }
        }
        else {
               int flag=0;
            for(int i=0;i<n;i++){
                if(nums[i]%3==2){
                    flag=1;
                    nums[i]=-1;
                    break;
                }
            }
            if(flag==0){
                vector<int>temp(2,-1);
                
                for(int i=0;i<n;i++){
                    if(nums[i]%3==1){
                        if(temp[0]==-1){
                            temp[0]=i;
                        }
                        else{
                            temp[1]=i;
                            break;
                        }
                    }
                }
            if(temp[1]==-1) return "";
            else {
                nums[temp[0]]=-1;
                nums[temp[1]]=-1;
            }
            }
        }
        string ans="";
        for(int i=n-1;i>=0;i--){
           if(nums[i]!=-1)
            ans+=nums[i]+'0';
        }
        if(ans[0]=='0') return to_string(0);
        return ans;
    }
};