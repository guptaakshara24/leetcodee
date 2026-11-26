class Solution {
public:
    bool canAliceWin(int n) {
        int stone=10;

        while(n>=stone){
            n=n-stone;
            stone--;
        }
        return stone%2==1;
    }
};