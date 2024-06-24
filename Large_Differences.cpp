#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateSumOfDifferences(vector<int> &A) {
    int sum = 0;
    for (size_t i = 0; i < A.size() - 1; ++i) {
        sum += abs(A[i] - A[i + 1]);
    }
    return sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int currentSum = calculateSumOfDifferences(A);
        int maxSum = currentSum;

        for (int i = 0; i < N; ++i) {
            int original = A[i];

            A[i] = 1;
            maxSum = max(maxSum, calculateSumOfDifferences(A));
            A[i] = K;
            maxSum = max(maxSum, calculateSumOfDifferences(A));

            A[i] = original;
        }

        cout << maxSum << endl;
    }

    return 0;
}
