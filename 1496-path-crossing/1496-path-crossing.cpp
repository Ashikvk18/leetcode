class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        unordered_set<string> set;
        set.insert("0,0");
        for(auto& c : path){
            if(c == 'N') y++;
            else if(c == 'S') y--;
            else if(c == 'E') x++;
            else x--;

            string st = to_string(x) + ',' + to_string(y);
            if(set.contains(st)) return true;
            set.insert(st);
        }
        return false;
    }
};