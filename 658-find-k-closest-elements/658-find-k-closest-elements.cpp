class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int >v;
        priority_queue<pair<int ,int>> p;
        for(int i=0;i<k;i++){
            p.push({abs(arr[i]-x),i});
            
        }
        for(int i=k;i<arr.size();i++){
        if(p.top().first>abs(arr[i]-x)){
            p.pop();
            p.push({abs(arr[i]-x),i});
        }
        }
        
        while (p.empty() == false) { 
       v.push_back(arr[p.top().second]);
        p.pop(); 
    } 
        sort(v.begin(),v.end());
        return v;
        
    }
};