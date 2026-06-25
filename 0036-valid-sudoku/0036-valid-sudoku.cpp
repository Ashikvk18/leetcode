class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> r(9), c(9), b(9);
        for(auto i{0uz}; i < 9; i++){
            for(auto j{0uz}; j < 9; j++){
                char ch = board[i][j];
                int x = (i/3)*3 + (j/3);
                if(ch != '.'){
                    if(r[i].contains(ch)||c[j].contains(ch)||b[x].contains(ch))
                    {
                        return false;
                    }
                    else{
                        r[i].insert(ch);
                        c[j].insert(ch);
                        b[x].insert(ch);
                    }
                }
            }
        }
        return true;
    }
};