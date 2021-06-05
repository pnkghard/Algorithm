#include<bits/stdc++.h>
using namespace std;

void AdditionInMatrix(int r, int c){
	int mat[r][c];
	int ans=0;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>mat[i][j];
			ans+=mat[i][j];
		}
	}
	cout<<ans<<endl;
}

int main(){
	int r, c;
	cin>>r>>c;
	AdditionInMatrix(r,c);
	return 0;
}
