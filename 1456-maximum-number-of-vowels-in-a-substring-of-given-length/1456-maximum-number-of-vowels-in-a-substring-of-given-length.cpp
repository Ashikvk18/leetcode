class Solution {
public:
    int maxVowels(string s, int k) {
        int right = 0;
        int left = 0;
        int curr = 0;
        int ans = 0;
        for(; right < s.size(); right++){
            if(vowel(s[right])){
                curr++;
            }
            while((right-left+1)>k){
                if(vowel(s[left])){
                    curr--;
                }
                left++;
            }
            if((right-left+1) == k){
                ans = max(ans,curr);
            }
        }
        return ans;
    }
    bool vowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};