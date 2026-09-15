class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size()-1;
        while (i<j){
            while(i<j && !valid(s[i])){
                i++;
            }
            while(i<j && !valid(s[j])){
                j--;
            }
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        return s;
    }
    bool valid(char c){
        return ('A'<=c && c<='Z')||('a'<=c && c<='z');
    }
};