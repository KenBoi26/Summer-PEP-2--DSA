#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
	    int m;
	    cin >> m;
	    
	    vector<int> arr(m);
	    for(int j=0; j<m; j++){
	        int temp;
	        cin >> temp;
	        arr[j] = temp;
	    }
	    
	    vector<int> result;
	    result.push_back(arr[0]);
	    int arr_size = 1;
	    for(int i=1; i<m; i++){
	        if(result[arr_size-1] != arr[i]){
	            result.push_back(arr[i]);
	            arr_size++;
	        }
	        
	    }
	    
	    cout << arr_size << endl;
	    for(auto i:result) cout << i << " ";
	    cout << endl;
	}

}
