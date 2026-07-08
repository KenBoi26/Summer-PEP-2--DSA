#include<bits/stdc++.h>
using namespace std;

int count11(const string& str) {
    if (str.length() < 2) return 0;
    if (str.substr(0, 2) == "11") return 1 + count11(str.substr(2));
    return count11(str.substr(1));
}

int main() {
    return 0;
}
