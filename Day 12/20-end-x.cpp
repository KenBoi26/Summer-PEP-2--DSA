#include<bits/stdc++.h>
using namespace std;

string endX(const string& str) {
    if (str.length() == 0) return "";
    if (str[0] == 'x') return endX(str.substr(1)) + "x";
    return string(1, str[0]) + endX(str.substr(1));
}

int main() {
    return 0;
}
