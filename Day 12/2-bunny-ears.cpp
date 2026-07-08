#include<bits/stdc++.h>
using namespace std;

int bunnyEars(int bunnies) {
    if (bunnies == 0) return 0;
    if (bunnies == 1) return 2;
    return 2 + bunnyEars(bunnies - 1);
}

int main() {
    return 0;
}
