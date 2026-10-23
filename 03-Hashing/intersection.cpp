
#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> intersection(vector<int>& v1, vector<int>& v2) {
    set<int> s(v1.begin(), v1.end());
    set<int> result;
    for (int x : v2) {
        if (s.count(x)) {
            result.insert(x);
        }
    }
    return vector<int>(result.begin(), result.end());
}
int main() {
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {2, 2, 2, 3};
    vector<int> ans = intersection(v1, v2);
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
