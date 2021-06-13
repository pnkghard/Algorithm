/*
Which row is bigger? : you need to take a matrix as an input, identify which row has the maximum sum of the digits.
For example, in the below matrix
1 2 3
4 5 6
7 8 9
Row 1 is 1,2,3
Row 2 is 4,5,6
Row 3 is 7,8,9
Constraints : 1 < (n,m) < 100
Input :
3 4
2 3 4 2
1 4 6 5
4 8 9 6
Output : Row 3
*/

#include<bits/stdc++.h>
using namespace std;

int rowSum(int n, int m){    
    int mat[n][m];
    int r[n];
    int a = 0;

    for(int i=0; i<n; i++) {
        int s=0;
        for(int j=0; j<m; j++) {
            cin>>mat[i][j];
            s = s + mat[i][j];
        }
        r[i] = s;
        if(s>r[i-1]) a=i;
    }
    cout<<"Row "<<a+1;

    return 0;
}

int main() {
    int n, m;
    cin>>n>>m;
    rowSum(n, m);
    return 0;
}