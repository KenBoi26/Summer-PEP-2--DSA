#include<bits/stdc++.h>
using namespace std;

int count7(int n) {
    if (n < 10) {
        if (n == 7) return 1;
        return 0;
    }
    if (n % 10 == 7) return 1 + count7(n / 10);
    return count7(n / 10);
}

int main() {
    return 0;
}
