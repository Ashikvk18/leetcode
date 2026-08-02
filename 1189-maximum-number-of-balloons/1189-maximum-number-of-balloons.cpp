class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = 0; int a = 0; int l = 0; int o = 0; int n = 0;
        for(auto x : text){
            if(x == 'b'){
                b++;
            } else if(x == 'a'){
                a++;
            } else if(x == 'l'){
                l++;
            } else if(x == 'o'){
                o++;
            } else if(x == 'n'){
                n++;
            }
        }
        l = l / 2;
        o = o / 2;
        return min({b,a,l,o,n});

    }
};