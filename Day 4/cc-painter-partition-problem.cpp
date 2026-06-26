#include <bits/stdc++.h>
using namespace std;

// Implement the painter_partition method here 

int calc(vector<int> boards, int mid){
    int count = 1;
    int total = 0;
    
    for(auto i:boards){
        if(total + i <= mid){
            total += i;
        }else{
            count++;
            total = i;
        }
    }
    
    return count;
}

int painter_partition(vector<int> boards, int k){
    int left = *max_element(boards.begin(), boards.end());
    int right = 0;
    
    for(auto i:boards){
        right += i;
    }
    
    int ans = 0;
    while(left <= right){
        int mid = left+(right-left)/2;
        
        if(calc(boards, mid) <= k){
            ans = mid;
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    
    return ans;
}

int main() {
    // Write your code here
    int t;
    cin>>t;
    while(t--){
    int N, k;
    cin >> N >> k;
    vector<int> boards(N);
    for (int i = 0; i < N; i++)
        cin >> boards[i];

    cout << painter_partition(boards, k) << endl;
    }
    return 0;
}