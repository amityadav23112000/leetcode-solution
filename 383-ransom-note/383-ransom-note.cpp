class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]]++;
        }
        int flag=1;
        for(int i=0;i<ransomNote.length();i++){
             if(m.find(ransomNote[i])==m.end()) return false;
            if(m.find(ransomNote[i])!=m.end())
            {m[ransomNote[i]]--;}
            
            if( m[ransomNote[i]]<0) flag=0;
        }
        if(flag)return true;
        else
            return false;
    }
};