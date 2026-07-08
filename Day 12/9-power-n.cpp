#include<bits/stdc++.h>
using namespace std;

int powerN(int base, int n) {
    if (n == 0) return 1;
    return base * powerN(base, n - 1);
}

int main() {
    return 0;
}
