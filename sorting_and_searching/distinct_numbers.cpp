#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef map<ll, bool> mllb;

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define SCLLD(t) scanf("%lld", &t)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    SCLLD(n);

    ll x;
    mllb d;
    FOR(i, 0, n) {
        SCLLD(x);
        d[x] = true;
    }

    printf("%lld", d.size());

    return 0;
}
