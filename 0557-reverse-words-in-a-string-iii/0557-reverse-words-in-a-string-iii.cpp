class Solution {
public:
    string reverseWords(string s) {
        for(int i = 0; i<s.size();i++){
            int j = i;
            if(s[i!=' ']){
                while(j<s.size()&& s[j]!=' '){
                    j++;
                }
                reverse(s,i,j-1);
                i=j;
            }
        }
        return s;
    }
    void reverse(string& s, int i, int j){
        while(i<j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
    }
};