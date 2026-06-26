#include<bits/stdc++.h>
using namespace std;

int calc(vector<int> &arr, int mid){
    int count = 1;
    int total = arr[0];

    for(int i=1; i<arr.size(); i++){
        if(arr[i]-total >= mid){
            total = arr[i];
            count++;
        }
    }

    return count;
}

int main(){

    int tc;
    cin >> tc;

    while(tc > 0){
        int n, k;
        cin >> n >> k;

        vector<int> arr;

        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;

            arr.push_back(temp);
        }

        int left = 1;
        int right = *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end());

        int ans = 0;
        sort(arr.begin(), arr.end());
        while(left <= right){
            int mid = left + (right-left)/2;

            if(calc(arr, mid) >= k){
                ans = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }

        cout << ans << endl;
        tc--;
    }

    return 0;
}