class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(size(typed)<size(name)) return false;
         int i=0;
        int j=0;
        for(;i<size(name) && j<size(typed);){
            if(name[i]==typed[j]){
                i++;
                j++;
            }
            else if( i>0 && name[i-1]==typed[j]) j++;
            else 
                return 
              false;
        }
       while(j<size(typed)){
           if(typed[j]==name[i-1]) j++;
           else return false;
       }
        if(i<size(name)) return false;
        return true;
    }

};