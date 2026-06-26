#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isPossible(vector<int>&arr,int k,int mid){
            long long sum = 0;
            for(int i=0;i<arr.size();i++){
                if(arr[i]>mid){
                    sum += arr[i]-mid;
                }
            }
            return sum>=k;
        }
        int EKO_EKO(vector<int> &arr,int k){
            int start = 0;
            int end = *max_element(arr.begin(),arr.end());
            int ans = -1;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(isPossible(arr,k,mid)){
                    ans = mid;
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }

            }
            return ans;
        }
};

int main(){
    int n, len;
    cin>>n>>len;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        arr.push_back(value);
    }
    Solution obj;
    cout<<obj.EKO_EKO(arr,len)<<endl;
}