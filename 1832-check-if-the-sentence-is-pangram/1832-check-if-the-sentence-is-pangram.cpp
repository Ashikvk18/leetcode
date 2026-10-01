class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>set(sentence.begin(), sentence.end());
        if(set.size() == 26){
            return true;
        }
        return false;
    }
};