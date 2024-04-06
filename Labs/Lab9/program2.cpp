#include <iostream>
#include <vector>

using namespace std;

int coin_change(int amount, const vector<int>& coins, int index) {
    if (amount == 0)
        return 1;

    if (amount < 0 || index == coins.size())
        return 0;

    int ways = 0;

    ways += coin_change(amount - coins[index], coins, index);

    ways += coin_change(amount, coins, index + 1);

    return ways;
}

int main() {
    int amount = 10;
    vector<int> coins = {25, 10, 5, 1};
    
    cout << coin_change(amount, coins, 0) << endl;

    return 0;
}
