class Solution {
public:
    int maxVowels(string s, int k) {
        int l = 0;
        int r = 0;
        int curr = 0;
        int ans = 0;
        for(; r < s.size(); r++){
            if(vowel(s[r])){
                curr++;
            }
            while(r-l+1>k){
                if(vowel(s[l])){
                    curr--;
                }
                l++;
            }
            ans = max(ans, curr);
        }
        return ans;
    }
    bool vowel(char c){
        return (c == 'a')||(c == 'e')||(c == 'i')||(c == 'o')||(c == 'u');
    }
};