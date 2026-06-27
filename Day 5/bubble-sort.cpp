#include<bits/stdc++.h>
using namespace std;

void pattern1(vector<int> arr){
    for(int i=0; i<5; i++){
        for(int j=0; j<5-i; j++){
            if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
            for(auto k:arr){
                cout << k << " ";
            }
            cout << endl;
        }
    }
}

void pattern2(vector<int> arr){
    for(int i=0; i<5; i++){
        for(int j=5; j>0+i; j--){
            if(arr[j] < arr[j-1]) swap(arr[j],arr[j-1]);
            for(auto k:arr){
                cout << k << " ";
            }
            cout << endl;
        }

    }
}

void pattern3(vector<int> arr){
    for(int i=0; i<5; i++){
        for(int j=0; j<5-i; j++){
            if(arr[j] < arr[j+1]) swap(arr[j],arr[j+1]);
            for(auto k:arr){
                cout << k << " ";
            }
            cout << endl;
        }
    }
}

void pattern4(vector<int> arr){
    for(int i=0; i<5; i++){
        for(int j=5; j>0+i; j--){
            if(arr[j] > arr[j-1]) swap(arr[j],arr[j-1]);
            for(auto k:arr){
                cout << k << " ";
            }
            cout << endl;
        }

    }
}


int main(){

    vector<int> arr = {6,5,4,8,2,1};

    pattern1(arr);

    cout << "Pattern 2: " << endl;
    pattern2(arr);

    cout << "Pattern 3: " << endl;
    pattern3(arr);

    cout << "Pattern 4: " << endl;
    pattern4(arr);

    return 0;
}