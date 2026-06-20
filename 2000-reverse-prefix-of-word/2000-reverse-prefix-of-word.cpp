class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;
        int j = 0;
        while(j<word.size() && word[j]!=ch){
            j++;
        }
        if(j==word.size()){
            return word;
        }
        else{
            while(i<j){
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
                i++;
                j--;
            }
            return word;
        }
    }
};