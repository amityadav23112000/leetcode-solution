class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
           map<int ,int > m;
        vector<int >ans;
        for(auto x:arr1){
            m[x]++;
        }
        for(auto x:arr2){
            while(m[x]!=0){ans.push_back(x);
                     m[x]--;     }
        }
        for(auto x:m){
            while( x.second !=0){ ans.push_back(x.first);
                                 x.second--;}
            
        }
        return ans;
    }
};