#include<bits/stdc++.h>
using namespace std;

string changeXY(const string& str) {
    if (str.length() == 0) return "";
    if (str[0] == 'x') return string("y") + changeXY(str.substr(1));
    return string(1, str[0]) + changeXY(str.substr(1));
}

int main() {
    return 0;
}
