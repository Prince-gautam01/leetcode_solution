
class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {

        int ans1 = 0;
        int ans2 = 0;

        // First row starts with red
        int r = red, b = blue;
        int row = 1;

        while (true) {
            if (row % 2 == 1) {
                if (r < row) break;
                r -= row;
            }
            else {
                if (b < row) break;
                b -= row;
            }

            ans1++;
            row++;
        }

        // First row starts with blue
        r = red, b = blue;
        row = 1;

        while (true) {
            if (row % 2 == 1) {
                if (b < row) break;
                b -= row;
            }
            else {
                if (r < row) break;
                r -= row;
            }

            ans2++;
            row++;
        }

        return max(ans1, ans2);
    }
};
