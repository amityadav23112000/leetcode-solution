class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
         string res;
        unordered_map<string, int> count;
   
        for(auto &c : paragraph)
            c =  isalpha(c)? tolower(c) : ' '; 
 
        istringstream iss(paragraph);
        string lower_word;
        while(iss >> lower_word)
            ++count[lower_word];  

        for(auto b : banned) count[b] = 0; 
        int max_count = 0;
        for(auto c : count){
            if(c.second > max_count){
                max_count = c.second;
                res = c.first;   
            }
        }
        return res;
    }
};