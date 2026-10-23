#include <iostream>
#include <string>
using namespace std;
int jewelsInStones(string jewels, string stones) {
    int count = 0;
    for (char stone : stones) {
        for (char jewel : jewels) {
            if (stone == jewel) {
                count++;
                break;
            }
        }
    }
    return count;
}
int main() {
    string jewels = "aA";
    string stones = "aAABbbb";
    cout <<jewelsInStones(jewels, stones);
    return 0;
}
