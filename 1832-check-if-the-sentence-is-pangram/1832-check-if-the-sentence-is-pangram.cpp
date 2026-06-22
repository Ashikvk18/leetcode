class Solution {
public:
    bool checkIfPangram(string sentence) {
       unordered_set<char>hset(sentence.begin(),sentence.end());
       if(hset.size() == 26){
        return true;
       } 
       else{
        return false;
       }
    }
};