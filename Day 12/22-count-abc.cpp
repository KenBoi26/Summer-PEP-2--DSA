#include<bits/stdc++.h>
using namespace std;

int countAbc(const string& str) {
    if (str.length() < 3) return 0;
    if (str.substr(0, 3) == "abc" || str.substr(0, 3) == "aba") return 1 + countAbc(str.substr(1));
    return countAbc(str.substr(1));
}

int main() {
    return 0;
}
