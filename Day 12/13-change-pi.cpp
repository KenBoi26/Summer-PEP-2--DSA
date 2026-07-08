#include<bits/stdc++.h>
using namespace std;

string changePi(const string& str) {
    if (str.length() < 2) return str;
    if (str.substr(0, 2) == "pi") return string("3.14") + changePi(str.substr(2));
    return string(1, str[0]) + changePi(str.substr(1));
}

int main() {
    return 0;
}
