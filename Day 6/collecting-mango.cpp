#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    int i = 0;

    while(i < tc){
        int n;
        cin >> n;
        stack<int> basket;
        stack<int> monotonic_basket;
        cout << "Case " << i+1 << ":\n"; 
        i++;
        while(n--){
            char type;
            cin >> type;

            if(type == 'A'){
                int mango;
                cin >> mango;

                basket.push(mango);
                if(monotonic_basket.size() == 0){
                    monotonic_basket.push(mango);
                    continue;
                }
                if(monotonic_basket.top() < mango) monotonic_basket.push(mango);
                else monotonic_basket.push(monotonic_basket.top());
            }else if(type == 'R'){
                monotonic_basket.pop();
                basket.pop();
            }else{
                if(monotonic_basket.size() == 0) cout << "Empty" << endl;
                else cout << monotonic_basket.top() << endl;
            }
        }
    }

    return 0;
}