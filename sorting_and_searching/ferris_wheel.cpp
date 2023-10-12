#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define PB push_back
#define SCLLD(t) scanf("%lld", &t)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, x;
    SCLLD(n);
    SCLLD(x);

    ll p;
    vll weights;
    FOR(i, 0, n) {
        SCLLD(p);
        weights.PB(p);
    }

    sort(weights.begin(), weights.end(), greater<int>());

    ll min = 0;
    ll il = 0;
    ll ir = weights.size() - 1;
    while (1) {
        if (il > ir) {
            break;
        }

        if (il == ir) {
            min++;
            break;
        }

        if (weights[il] + weights[ir] <= x) {
            ir--;
        }
        
        il++;
        min++;
    }

    printf("%lld\n", min);

    return 0;
}
