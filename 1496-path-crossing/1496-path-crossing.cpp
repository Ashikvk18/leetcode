class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        unordered_set<string>hset;
        hset.insert("0,0");
        for(auto& c : path){
            if(c == 'N') x++;
            else if(c == 'S') x--;
            else if(c == 'W') y++;
            else y--;

            string st = to_string(x) + ',' + to_string(y);
            if(hset.contains(st)) return true;
            hset.insert(st);
        }
        return false;
    }
};