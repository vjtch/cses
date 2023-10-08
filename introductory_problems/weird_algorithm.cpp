#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define EVEN(t) !(t % 2)
#define SCLLD(t) scanf("%lld", &t)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    SCLLD(n);

    printf("%lld", n);

    while (n != 1) {
        if (EVEN(n)) {
            n /= 2;
        } else {
            n *= 3;
            n++;
        }

        printf(" %lld", n);
    }

    return 0;
}
