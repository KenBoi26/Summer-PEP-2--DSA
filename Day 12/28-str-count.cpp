#include<bits/stdc++.h>
using namespace std;

int strCount(const string& str, const string& sub) {
    if (str.length() < sub.length()) return 0;
    if (str.substr(0, sub.length()) == sub) return 1 + strCount(str.substr(sub.length()), sub);
    return strCount(str.substr(1), sub);
}

int main() {
    return 0;
}
