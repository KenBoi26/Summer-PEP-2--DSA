#include<bits/stdc++.h>
using namespace std;

// Forward declaration of the knows API.
bool knows(int a, int b);

class Solution {
public:
    /**
     * @param n a party with n people
     * @return the celebrity's label or -1
     */
    int findCelebrity(int n) {
        // Write your code here
        vector<int> indegree(n,0);
        vector<int> outdegree(n,0);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(knows(i,j) && i!=j){
                    indegree[j]++;
                    outdegree[i]++;
                }
            }
        }

        for(int i=0; i<n; i++){
            if(outdegree[i] == 0 && indegree[i] == n-1){
                return i;
            }
        }

        return -1;
    }
};

int main(){


    return 0;
}