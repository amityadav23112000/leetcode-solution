class Solution {
public:
    void wiggleSort(vector<int>& nums) {
         int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>res(n);
        int j=n-1;
        for(int i=1;i<n;i+=2){
            res[i]=nums[j];
            j--;
            }
         for(int i=0;i<n;i+=2){
             res[i]=nums[j];
             j--;
         }
      for(int i=0;i<n;i++){
          nums[i]=res[i];
      }
       
    }
};