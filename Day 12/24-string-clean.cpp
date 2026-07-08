#include<bits/stdc++.h>
using namespace std;

string stringClean(const string& str) {
    if (str.length() < 2) return str;
    if (str[0] == str[1]) return stringClean(str.substr(1));
    return string(1, str[0]) + stringClean(str.substr(1));
}

int main() {
    return 0;
}
