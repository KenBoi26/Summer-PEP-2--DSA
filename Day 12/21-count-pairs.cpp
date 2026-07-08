#include<bits/stdc++.h>
using namespace std;

int countPairs(const string& str) {
    if (str.length() < 3) return 0;
    if (str[0] == str[2]) return 1 + countPairs(str.substr(1));
    return countPairs(str.substr(1));
}

int main() {
    return 0;
}
