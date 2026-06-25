#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int left = 0;
        int right = arr.size()-1;

        while(left < right){
            int mid = left+(right-left)/2;

            if(arr[left] <= arr[mid]){
                if(arr[mid] > arr[right]){
                    left = mid + 1;
                }else{
                    right = mid;
                }

            }else{
                if(arr[mid] < arr[right]){
                    right = mid;
                }else{
                    left = mid+1;
                }
            }
        }

        return left;
    }
};


int main(){


    return 0;
}