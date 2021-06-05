#include<bits/stdc++.h>
using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	int mat[r][c];
	for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin>>mat[i][j];

	int temp[r*c];
	int k=0;

	for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) temp[k++] = mat[i][j];

	sort(temp, temp + k);

	int i=0, h=0;
	while(i<k){
		if(temp[i]!=temp[i+1]) i++;
		if(temp[i]==temp[i+1]){
			int d=i+1;
			while(d<k) temp[d]=temp[d+1];
		}
		h++;
	}
	i=0;
	while(i<h){
		cout<<temp[h]<<" ";
	}

//	k = 0;
//	for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) mat[i][j] = temp[k++];
//
//	for (int i = 0; i < r; i++) {
//	        for (int j = 0; j < c; j++) cout << mat[i][j] << " ";
//	        cout << endl;
//	}
//    return 0;
}

//3 3
//3 2 5
//4 1 4
//5 6 5
