#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        stack<int> st;
        
        for(int i=0; i<mat.size(); i++){
            st.push(i);
        }
        
        while(st.size() > 1){
            int person_1 = st.top();
            st.pop();
            int person_2 = st.top();
            st.pop();
            
            if(mat[person_1][person_2] == 1){
                st.push(person_2);
            }else{
                st.push(person_1);
            }
        }
        
        int counter;
        
        for(int i=0; i<mat.size(); i++){
            
            if(i == st.top()) continue;
            
            if(mat[st.top()][i] == 1) return -1;
            if(mat[i][st.top()] == 0) return -1;
        }
        
        
        return st.top();
    }
};

int main(){


    return 0;
}