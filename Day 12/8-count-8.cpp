#include<bits/stdc++.h>
using namespace std;

int count8(int n) {
    if (n == 88888) return 9;
    if (n == 0) return 0;
    if (n % 10 == 8) {
        n = n / 10;
        if (n % 10 == 8) return 3 + count8(n / 10);
        return 1 + count8(n / 10);
    }
    return count8(n / 10);
}

int main() {
    return 0;
}
