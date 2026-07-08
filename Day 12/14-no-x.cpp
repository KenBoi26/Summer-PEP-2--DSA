#include<bits/stdc++.h>
using namespace std;

string noX(const string& str) {
    if (str.length() == 0) return "";
    if (str[0] == 'x') return noX(str.substr(1));
    return string(1, str[0]) + noX(str.substr(1));
}

int main() {
    return 0;
}
