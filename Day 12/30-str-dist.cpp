#include<bits/stdc++.h>
using namespace std;

int strDist(const string& str, const string& sub) {
    if (str.find(sub) == string::npos) {
        return 0;
    }

    if (str.rfind(sub, 0) == 0) {
        if (str.size() >= sub.size() && str.substr(str.size() - sub.size()) == sub) return str.length();
        return strDist(str.substr(0, str.length() - 1), sub);
    }

    return strDist(str.substr(1), sub);
}

int main() {
    return 0;
}
