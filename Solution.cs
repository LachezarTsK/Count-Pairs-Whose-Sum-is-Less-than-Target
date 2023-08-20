
using System;
using System.Collections;

public class Solution
{
    public int CountPairs(IList<int> input, int target)
    {
        ArrayList.Adapter((IList)input).Sort();

        int left = 0;
        int right = input.Count - 1;
        int countPairsWithSumLessThanTarget = 0;

        while (left < right)
        {
            if (input[left] + input[right] < target)
            {
                countPairsWithSumLessThanTarget += right - left;
                ++left;
                continue;
            }
            --right;
        }
        return countPairsWithSumLessThanTarget;
    }
}
