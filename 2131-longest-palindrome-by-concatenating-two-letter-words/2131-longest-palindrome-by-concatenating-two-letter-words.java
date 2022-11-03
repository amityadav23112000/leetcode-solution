class Solution {
    public int longestPalindrome(String[] words) {
        int [][] count = new int[26][26];
        int te = 0;
        for(String w : words){
            int a = w.charAt(0) - 'a';
            int b = w.charAt(1) - 'a';
            if(count[b][a] > 0){
                te += 4;
                count[b][a]--;
            }
            else
                count[a][b]++;
        }
        for(int i=0; i<26; i++){
            if(count[i][i] >0){
                te += 2;
                break;
            }
        }
        return te;
    }
}