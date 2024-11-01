#include<stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int tmp;
        sort(nums.begin(), nums.end(), [](int& a, int& b) { return a > b; });
        int y = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (y < k) {
                if (nums[i] != tmp) {
                    y++;
                    tmp = nums[i];
                }
                else if (nums[i] == tmp) {
                    continue;
                }
            }
            if (y == k) {
                return nums[i];
            }
        }
    }
};
int main()
{

	return 0;
}