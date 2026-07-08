#include<bits/stdc++.h>
using namespace std;

bool nestParen(const string& str) {
    if (str.length() == 0) return true;
    if (str[0] == '(' && str[str.length() - 1] == ')') return nestParen(str.substr(1, str.length() - 2));
    return false;
}

int main() {
    return 0;
}
