#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> arr = {176, -272, -272, -45, 269, -327, -945, 176};

    for(int i=0; i<arr.size(); i++){
        int max = arr.size()-i-1;
        for(int j=arr.size()-i-1; j>=0; j--){
            if(arr[j] >= arr[max]){
                max = j;
            }
        }

        swap(arr[max],arr[arr.size()-i-1]);
        if(i!=arr.size()-1) cout << max << " ";
    }
    cout << endl;

    return 0;
}