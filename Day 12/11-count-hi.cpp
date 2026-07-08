#include<bits/stdc++.h>
using namespace std;

int countHi(const string& str) {
    if (str.length() < 2) return 0;
    if (str.substr(0, 2) == "hi") return 1 + countHi(str.substr(2));
    return countHi(str.substr(1));
}

int main() {
    return 0;
}
