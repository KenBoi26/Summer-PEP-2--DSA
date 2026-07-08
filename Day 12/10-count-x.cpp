#include<bits/stdc++.h>
using namespace std;

int countX(const string& str) {
    if (str.length() == 0) return 0;
    if (str[0] == 'x') return 1 + countX(str.substr(1));
    return countX(str.substr(1));
}

int main() {
    return 0;
}
