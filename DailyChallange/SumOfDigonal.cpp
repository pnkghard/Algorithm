/*
Comparison between diagonals : you need to take a matrix as an input, calculate the sum of the digits for each diagonal and compare them.
For example, in the below matrix
1 2 3
4 5 6
7 8 9
Diagonal 1 is 1,5,9.
Diagonal 2 is 3,5,7.

Constraints : 1 < (n,m) < 100

Input :
3 3
2 3 4
1 4 6
7 8 9

Output : Equal
*/

#include<bits/stdc++.h>
using namespace std;

int digonalSum(int n, int m){    
    int mat[n][m];
    int d1[n], d2[n];
    int k=m-1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>mat[i][j];
            if(i == j) d1[i] = mat[i][j];
            if(k == j-i) {
                d2[i] = mat[i][k];
                k--;
            }
        }
    }
    int l=0, r=0;
    for(int i=0; i<n; i++) {
        l = l + d1[i];
        r = r + d2[i];
    }
    if(l>r) for(int i=0; i<n; i++){
                if(i < n-1) cout<<d1[i]<<" ";
                else cout<<d1[i];
    }
    else if(l<r) for(int i=0; i<n; i++) {
                if(i < n-1) cout<<d2[i]<<" ";
                else cout<<d2[i];
    }
    else cout<<"Equal";
    return 0;
}

int main() {
    int n, m;
    cin>>n>>m;
    digonalSum(n, m);
    return 0;
}