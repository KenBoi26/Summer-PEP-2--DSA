#include<bits/stdc++.h>
using namespace std;

string pairStar(const string& str) {
    if (str.length() <= 1) return str;
    if (str[0] == str[1]) return string(1, str[0]) + "*" + pairStar(str.substr(1));
    return string(1, str[0]) + pairStar(str.substr(1));
}

int main() {
    return 0;
}
