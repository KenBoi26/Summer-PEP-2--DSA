#include<bits/stdc++.h>
using namespace std;

string parenBitHelper(const string& str, bool flag) {
    if (str[0] == ')') return ")";
    if (str[0] == '(') return string("(") + parenBitHelper(str.substr(1), true);
    if (flag) return string(1, str[0]) + parenBitHelper(str.substr(1), flag);
    return parenBitHelper(str.substr(1), flag);
}

string parenBit(const string& str) {
    return parenBitHelper(str, false);
}

int main() {
    return 0;
}
