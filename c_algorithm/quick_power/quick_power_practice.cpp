//64bit a*b mod p
#include <iostream>

using namespace std;

long long mul(long long a, long long b, long long p) {
    long long ans = 0;
    a %= p;
    while (b > 0) {
        if (b & 1) {
            ans = (ans + a) % p;
        }
        a = (a * 2) % p;
        b >>= 1;
    }
    return ans;
}

int main() {
    long long a, b, p;
    cin >> a >> b >> p;
    long long d = mul(a, b, p);
    cout << d << endl;
    return 0;
}
