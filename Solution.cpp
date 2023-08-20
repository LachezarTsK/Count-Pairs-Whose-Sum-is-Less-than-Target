
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    int countPairs(vector<int>& input, int target) const {

        //C++20: std::ranges::sort(input);
        sort(input.begin(), input.end());

        size_t left = 0;
        size_t right = input.size() - 1;
        int countPairsWithSumLessThanTarget = 0;

        while (left < right) {
            if (input[left] + input[right] < target) {
                countPairsWithSumLessThanTarget += right - left;
                ++left;
                continue;
            }
            --right;
        }
        return countPairsWithSumLessThanTarget;
    }
};
