#include<bits/stdc++.h>
using namespace std;

string allStar(const string& str) {
    if (str.length() <= 1) return str;
    return string(1, str[0]) + "*" + allStar(str.substr(1));
}

int main() {
    return 0;
}
