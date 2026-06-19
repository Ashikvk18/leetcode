class Solution {
public:
    string reverseOnlyLetters(string s) {   
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(!valid(s[i])){
                i++;
            }
            else if(!valid(s[j])){
                j--;
            }
            else{
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
            }
        }
        return s;
    }
    bool valid(char c){
        return (('A'<=c && c<='Z')||('a'<=c && c<='z'));
    }
};