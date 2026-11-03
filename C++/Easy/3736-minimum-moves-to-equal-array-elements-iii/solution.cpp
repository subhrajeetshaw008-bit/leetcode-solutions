class Solution {
public:
    int minMoves(vector<int>& nums) {
        int biggest = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > biggest) {
                biggest = nums[i];
            }
        }

        int moves = 0;
        for (int i = 0; i < nums.size(); i++) {
            moves = moves + (biggest - nums[i]);
        }

        return moves;
    }
};