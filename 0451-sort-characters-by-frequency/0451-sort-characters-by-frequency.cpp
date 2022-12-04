class Solution {
public:
    string frequencySort(string str) {
         map < char,int>m;
        for(int i=0;i<str.size();i++){
            m[str[i]]++;
        } 
priority_queue< pair<int ,char >> p;
         string s;
        for(auto i=m.begin(); i!=m.end();i++){
            p.push({i->second,i->first});
        }
        while(p.empty()==false){
            int n =p.top().first;
            while(n!=0){
         char c=p.top().second;
         n--;
            s+=c;}
            p.pop();
        }
        return s;
    }
};