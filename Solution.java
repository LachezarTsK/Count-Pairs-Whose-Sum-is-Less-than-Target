
import java.util.Collections;
import java.util.List;

public class Solution {

    public int countPairs(List<Integer> input, int target) {

        Collections.sort(input);

        int left = 0;
        int right = input.size() - 1;
        int countPairsWithSumLessThanTarget = 0;

        while (left < right) {
            if (input.get(left) + input.get(right) < target) {
                countPairsWithSumLessThanTarget += right - left;
                ++left;
                continue;
            }
            --right;
        }
        return countPairsWithSumLessThanTarget;
    }
}
