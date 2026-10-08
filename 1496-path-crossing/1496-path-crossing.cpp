class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        unordered_set<string>hset;
        hset.insert("0,0");
        for(auto& c : path){
            if(c == 'N') y++;
            else if(c == 'S') y--;
            else if(c == 'W') x++;
            else x--;

            string st = to_string(x) + ',' + to_string(y);
            if(hset.contains(st)) return true;
            hset.insert(st);
        }
        return false;
    }
};