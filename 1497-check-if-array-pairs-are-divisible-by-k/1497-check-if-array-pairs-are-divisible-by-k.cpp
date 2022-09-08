class Solution {
public:
    bool canArrange(vector<int>& nums, int k) {
          int n=nums.size();
      unordered_map<int,int>m;
      for(int i=0;i<n;i++){
            m[(k + nums[i] % k) % k]++;
      }
      for(int i=0;i<n;i++){
         int rem=  (k + nums[i] % k) % k;;
         if(rem==0){
             if(m[rem]%2==1)return false;
         }
         else if(2*rem==k){
             if(m[rem]%2==1)return false;
         }
         else {
             int a=m[rem];
             int b=m[k-rem];
             if(a!=b)return false;
         }
      }
      return true;
    }
};