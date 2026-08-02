class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> hmap;
        for(auto x : matches){
            int y = x[0];
            int z = x[1];
            if(!hmap.contains(y)){
                hmap[y]=0;
            }
            hmap[z]++;
        }
        vector<int>w;
        vector<int>l;
        for(auto x : hmap){
            if(x.second==0){
                w.push_back(x.first);
            } else if(x.second==1){
                l.push_back(x.first);
            }
        }
        sort(w.begin(),w.end());
        sort(l.begin(),l.end());
        return {w,l};
    }
};