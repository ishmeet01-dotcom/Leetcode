class Solution {
public:
    int maxJump(vector<int>& stones) {
        int ans = stones[1] - stones[0];
        int length = 0;
        for(int i = 2;i<stones.size();i++){
            length = stones[i]- stones[i-2];
            ans = max(ans,length);

        }
        return ans;
    }
};