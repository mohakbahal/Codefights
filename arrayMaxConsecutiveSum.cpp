int arrayMaxConsecutiveSum(std::vector<int> a, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }
    int max = sum;
    for (int i = k; i < a.size(); i++) {
        sum += a[i] - a[i-k];
        if (sum > max) {
            max = sum;
        }
    }
    return max;
}