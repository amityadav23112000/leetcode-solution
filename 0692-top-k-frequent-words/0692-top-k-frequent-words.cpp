class Solution {
public:
    
    
    struct Comp {
        bool operator()(const pair<int, string>& lhs, const pair<int, string>& rhs) const {
            if (lhs.first != rhs.first)
                return lhs.first < rhs.first;
            return lhs.second > rhs.second;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        int n=words.size();
        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,Comp>pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        vector<string> vec;
        for(int i=0;i<k;i++){
            vec.push_back(pq.top().second);
            pq.pop();
        }
        //reverse(vec.begin(),vec.end());
       // sort(vec.begin(),vec.end(),mycmp);
        return vec;
    
    }
};