#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int s;
        cin >> s;

        vector<vector<int>> arr;

        for(int j=0; j<s; j++){
            vector<int> temp;
            for(int k=0; k<s; k++){
                int num;
                cin >> num;
                temp.push_back(num);
            }
            arr.push_back(temp);
        }

        int count = 0;
        for(int j=0; j<s; j++){
            int row = 0;
            int col = j;

            int curr_min = 0;
            while(col < s && row < s-j){
                if(arr[row][col] < curr_min){
                    curr_min = arr[row][col];    
                }
                row++;
                col++;
            }

            count += (-1*curr_min);
        }

        for(int j=1; j<s; j++){
            int row = j;
            int col = 0;

            int curr_min = 0;
            while(col < s-j && row < s){
                if(arr[row][col] < curr_min){
                    curr_min = arr[row][col];    
                }
                row++;
                col++;
            }

            count += (-1*curr_min);
        }

        cout << count << endl;
    }

    return 0;
}