class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int ans = 0, i = 0, j = nums.size() - 1;
        while (i < j) {
            while (i < j && nums[i] != 0) i++;
            while (i < j && nums[j] == 0) j--;
            if (i < j) {
                swap(nums[i++], nums[j--]);
                ans++;
            }
        }
        return ans;
    }
};