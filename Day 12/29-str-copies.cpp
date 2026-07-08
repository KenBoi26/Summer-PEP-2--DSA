#include<bits/stdc++.h>
using namespace std;

bool strCopies(const string& str, const string& sub, int n) {
    if (n < 1) return true;
    if (str.length() < sub.length()) return false;
    if (str.substr(0, sub.length()) == sub) return strCopies(str.substr(1), sub, n - 1);
    return strCopies(str.substr(1), sub, n);
}

int main() {
    return 0;
}
