#include<bits/stdc++.h>
using namespace std;

int triangle(int n) {
    if (n == 0 || n == 1) return n;
    return n + triangle(n - 1);
}

int main() {
    return 0;
}
