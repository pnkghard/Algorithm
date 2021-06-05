#include<bits/stdc++.h>
using namespace std;

int main(){
	int r, c, i, j;
	cin>>r>>c;
	int ar[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			cin>>ar[i][j];
		}
	}
	for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				if((ar[i][j]%2)==0) cout<<ar[i][j]<<endl;
			}
		}
	return 0;
}

/*4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16*/
