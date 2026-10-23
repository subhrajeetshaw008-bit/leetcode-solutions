class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;

        for (int j = 0; j < queries.size(); j++) {
            int cx = queries[j][0];
            int cy = queries[j][1];
            int r = queries[j][2];
            int count = 0;

            for (int i = 0; i < points.size(); i++) {
                int dx = points[i][0] - cx;
                int dy = points[i][1] - cy;

                if (dx * dx + dy * dy <= r * r) {
                    count = count + 1;
                }
            }

            answer.push_back(count);
        }

        return answer;
    }
};