class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
    vector <string>vec;

    int i = 0;
    
    while(i<words.size())
    {
        int j = i+1;
        int sum = words[i].length();
        int curr = 0;
        while(j<words.size() and sum+words[j].size()+1+curr<=maxWidth)
        {
            sum += words[j].length();
            j++;
            curr++;
        }
        string now = "";
        int extra = (curr==0)?0:(maxWidth - sum)/curr;
        int more = (curr==0)?0:(maxWidth - sum)%curr;
        if(j==words.size())
        {
             for(int k=i;k<j;k++)
            {
                  now += words[k];
                 now += " ";
            }
            now.pop_back();
        }
        else
        {
             for(int k=i;k<j;k++)
            {
                now += words[k];
                if(k==j-1)
                    break;
                for(int g=0;g<extra;g++)
                {
                    now += " ";
                }
                if(more)
                {
                    now += " ";
                    more--;
                }
            }
        }

        while(now.length()<maxWidth)
            now += " ";
        vec.push_back(now);
        i=j;
    }
    
    return vec; 
    }
};