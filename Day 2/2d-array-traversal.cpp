#include<bits/stdc++.h>
using namespace std;

void pattern1(vector<vector<int>> matrix){
    for(vector<int> i:matrix){
        for(int j:i){
            cout << j << " ";
        }
    }

    cout << endl;
}

void pattern2(vector<vector<int>> matrix){
    for(vector<int> i:matrix){
        for(int j=i.size()-1; j>=0; j--){
            cout << i[j] << " ";
        }
    }
    cout << endl;
}

void pattern3(vector<vector<int>> matrix){
    for(int i=0; i<matrix.size(); i++){
        if(i%2==0){
            for(int j=0; j<matrix[0].size(); j++){
                cout << matrix[i][j] << " ";
            }
        }else{
            for(int j=matrix[0].size()-1; j>=0; j--){
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
}

void pattern4(vector<vector<int>> matrix){
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout << matrix[j][i] << " ";
        }
    }

    cout << endl;
}

void pattern5(vector<vector<int>> matrix){
    for(int i=0; i<matrix.size(); i++){
        for(int j=matrix[0].size()-1; j>=0; j--){
            cout << matrix[j][i] << " ";
        }
    }

    cout << endl;
}

void pattern6(vector<vector<int>> matrix){
    for(int i=0; i<matrix.size(); i++){
        if(i%2==0){
            for(int j=0; j<matrix[0].size(); j++){
                cout << matrix[j][i] << " ";
            }
        }else{
            for(int j=matrix[0].size()-1; j>=0; j--){
                cout << matrix[j][i] << " ";
            }
        }
    }

    cout << endl;
}

void pattern7(vector<vector<int>> matrix){
    for(int i=0; i<matrix.size()+matrix[0].size()-1; i++){
        for(int j=0; j<matrix.size(); j++){
            for(int k=0; k<matrix[0].size(); k++){
                if(j+k == i) {
                    cout << matrix[j][k] << " ";
                }
            }
        }
    }
    cout << endl;
}

void pattern7_optimized(vector<vector<int>> matrix){
    for(int i=0; i<matrix.size(); i++){
        int column=i;
        int row=0;
        while (column>=0 && row<matrix.size()){
            cout << matrix[row++][column--] << " ";
        }
    }

    for(int i=1; i<matrix.size(); i++){
        int column=matrix.size()-1;
        int row=i;
        while (column>=0 && row<matrix.size()){
            cout << matrix[row++][column--] << " ";
        }
    }

    cout << endl;
}

void pattern8(vector<vector<int>> matrix){
    for(int i=0; i<matrix.size(); i++){
        if(i%2 == 0){
            int column=i;
            int row=0;
            while (column>=0 && row<matrix.size()){
                cout << matrix[row++][column--] << " ";
            }
        }else{
            int column = 0;
            int row = i;
            while(column <= i && row >= 0){
                cout << matrix[row--][column++] << " ";
            }
        }
        
    }

    for(int i=1; i<matrix.size(); i++){
       
        if(i%2 == 1){
            int column=matrix.size()-1;
            int row=i;
            while (column>=0 && row<matrix.size()){
                cout << matrix[row++][column--] << " ";
            }
        }else{
            int column = i;
            int row = matrix.size()-1;
            while(column < matrix[0].size() && row >= 0){
                cout << matrix[row--][column++] << " ";
            }
        }
    }

    cout << endl;
}

void pattern9(vector<vector<int>> matrix){
    
}

int main(){

    vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    pattern1(matrix);
    pattern2(matrix);
    pattern3(matrix);
    pattern4(matrix);
    pattern5(matrix);
    pattern6(matrix);
    pattern7(matrix);
    pattern7_optimized(matrix);
    pattern8(matrix);

    return 0;
}