#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;

    int sum = 0;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i ++) {

        int x;

        cin >> x;

        a[i] = x;
    }

    for (int i = 0 ; i < n ; i ++){

        if (a[i] < a[i - 1]){

            sum += a[i - 1] - a[i];

            a[i] = a[i - 1];
        }
    }

    cout << sum << "\n";
}
