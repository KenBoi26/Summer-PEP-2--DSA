#include<bits/stdc++.h>
using namespace std;

int countHi2(const string& str) {
    if (str.length() < 2) return 0;
    if (str[0] == 'x' && str.length() < 3) return 0;
    if (str[0] == 'x' && str.substr(1, 2) == "hi") return countHi2(str.substr(3));
    if (str.substr(0, 2) == "hi") return 1 + countHi2(str.substr(2));
    return countHi2(str.substr(1));
}

int main() {
    return 0;
}
