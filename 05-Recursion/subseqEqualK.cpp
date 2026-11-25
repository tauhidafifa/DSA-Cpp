#include <iostream>
#include <vector>
using namespace std;

int sumK(vector<int>& arr, int i, int sum, int k) {
    if (i == arr.size()) {
        if (sum == k) {
            return 1;
        }
        return 0;
    }

    // Pick the current element
    int pick = sumK(arr, i + 1, sum + arr[i], k);

    // Do not pick the current element
    int notPick = sumK(arr, i + 1, sum, k);

    return pick + notPick;
}

int main() {
    vector<int> arr = {1, 2, 3};
    int k = 3;

    cout << sumK(arr, 0, 0, k);
    return 0;
}

