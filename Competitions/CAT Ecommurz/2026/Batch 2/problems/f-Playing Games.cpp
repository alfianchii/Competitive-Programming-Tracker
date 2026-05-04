// BUKAN PUNYA GW
#include <bits/stdc++.h>
using namespace std;

struct Game {
    long long A;
    long long B;
};

int main() {
    long long n, t;
    cin >> n >> t;

    vector<Game> arr;

    while (n--) {
        Game g;
        cin >> g.A >> g.B;
        arr.push_back(g);
    }

    vector<Game> arr2(arr);

    sort(arr2.begin(), arr2.end(), [](const Game &a, const Game &b) {
        return a.A < b.A;
    });

    long long res1 = 0;

    for (int i = 0; i < arr.size(); i++) {
        long long val = t / (arr[i].A + arr[i].B);

        if (t % (arr[i].A + arr[i].B) >= arr[i].A) {
            val++;
        }

        res1 = max(res1, val);
    }

    long long res2 = t / (arr2[0].A + arr2[1].A) * 2;

    if (
        t % (arr2[0].A + arr2[1].A) >= arr2[0].A ||
        t % (arr2[0].A + arr2[1].A) >= arr2[1].A
    ) {
        res2++;
    }

    cout << max(res1, res2) << endl;
}