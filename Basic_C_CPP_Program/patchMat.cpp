#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int mat1[r][c];
    for(int i =0; i<r;i++){
        for(int j=0; j<c; j++){
            cin>>mat1[i][j];
        }
    }
    cin>>r>>c;
    int mat2[r][c];
    for(int i =0; i<r;i++){
        for(int j=0; j<c; j++){
            cin>>mat2[i][j];
        }
    }
    for(int i =0; i<r;i++){
        for(int j=0; j<c; j++){
            cout<<mat1[i][j]+mat2[i][j];
            if(j!=c-1) cout<<" ";
        }
        cout<<endl;
    }
}

//Input
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// 3 3
// 2 3 4
// 5 6 7
// 7 8 9

//output
// 3 5 7
// 9 11 13
// 14 16 18