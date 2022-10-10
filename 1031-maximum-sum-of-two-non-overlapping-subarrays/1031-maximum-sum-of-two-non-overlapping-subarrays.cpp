class Solution {
public:
     int F(vector<int>& arr, int a, int b)
    {
        int n = arr.size();
        vector<int> left(n);
        vector<int> right(n);
       int i = 0, j = 0, sum = 0;
       while(a--)
            sum += arr[i++];
        left[i-1] = sum;
        while(i < n)
        {
            sum -= arr[j++];
            sum += arr[i];
            left[i] = max(left[i-1], sum);
            i++;
        }
        
 
        i = n-1; j = n-1; sum = 0;
        while(b--)
            sum += arr[i--];
        right[i+1] = sum;
        while(i >= 0)
        {
            sum -= arr[j--];
            sum += arr[i];
            right[i] = max(right[i+1], sum);
            i--;
        }
  
        int max_sum = 0;
        for(int x = 0; x<n-1; x++)
            max_sum = max(max_sum, left[x] + right[x+1]);        
        
        return max_sum;
        
    }
    int maxSumTwoNoOverlap(vector<int>& arr, int len1, int len2) {
  
        int case1 = F(arr, len1, len2);
        int case2 = F(arr, len2, len1);
        return max(case1, case2);
    }
};