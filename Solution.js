
/**
 * @param {number[]} input
 * @param {number} target
 * @return {number}
 */
var countPairs = function (input, target) {

    input.sort((x, y) => x - y);

    let left = 0;
    let right = input.length - 1;
    let countPairsWithSumLessThanTarget = 0;

    while (left < right) {
        if (input[left] + input[right] < target) {
            countPairsWithSumLessThanTarget += right - left;
            ++left;
            continue;
        }
        --right;
    }
    return countPairsWithSumLessThanTarget;
};
