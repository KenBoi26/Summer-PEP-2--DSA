#include<bits/stdc++.h>
using namespace std;

void func(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n = n/10;
    }
    if(sum<10){
        cout << sum;
        return;
    }
    
    func(sum);
}

int main(){

    int n;
    cin >> n;
    func(n);


    return 0;
}