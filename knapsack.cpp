#include <bits/stdc++.h>
using namespace std;
    int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int ans = 0, rem = n;

    ans = rem / 100;
    rem = rem % 100;

    ans += rem / 50;
    rem = rem % 50;

    ans += rem / 20;
    rem = rem % 20;

    ans += rem / 10;
    rem = rem % 10;

    ans += rem / 5;
    rem = rem % 5;

    ans += rem / 1;
    rem = rem % 1;

    cout << ans << endl;
    return 0;
}
