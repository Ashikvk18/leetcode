class Solution {
public:
    bool valid(char c){
        return ('A'<= c && c<='Z')||('a'<= c && c<='z')||('0'<= c && c<='9');
    }
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            while(i<j && !valid(s[i])){
                i++;
            }
            while(i<j && !valid(s[j])){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};