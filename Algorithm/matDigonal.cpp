/*
 Input:
 5 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20

output:
1
5 2
9 6 3
13 10 7 4
17 14 11 8
18 15 12
19 16
20
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int r, c;
	cin>>r>>c;
	int a[r][c];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>a[i][j];
		}
	}
	int q=0;
	int i=0, j=0, d=0;
	while(i<r && j<c){
		if(i<(r-1)) j=0;
		while(j<c){
			cout<<a[i][j]<<" ";
			if(i==0 || j>=c){
				cout<<endl;
				break;
			}
			if(i<=r) {
				i--;
				j++;
			}
		}
		d++;
		i=d;
		if(j>=c) cout<<endl;
		if(d>=r){
			i=r-1;
			q++;
		}
		j=q;
	}
}
