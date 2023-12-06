#include <bits/stdc++.h>
using namespace std;

void partition(int n, vector<int> &res, int start) {
    if (n == 0) {
        for (int i : res) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i <= n; ++i) {
        res.push_back(i);
        partition(n - i, res, i);

        // Sau khi in dãy số, loại bỏ số cuối cùng để thử một giá trị khác
        res.pop_back();
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> res;
    partition(n, res, 1);
    return 0;
}
