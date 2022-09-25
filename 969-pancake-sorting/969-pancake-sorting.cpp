class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            int index=i;
            for(int j=i-1;j>=0;j--){
                if(arr[index]<arr[j])
                    index=j;
            }
            if(index!=i){
                ans.push_back(index+1);
                reverse(arr.begin(),arr.begin()+index+1);
                ans.push_back(i+1);
                reverse(arr.begin(),arr.begin()+i+1);
            }
        }
        return ans;
    }
};