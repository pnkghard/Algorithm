/*7
10
5
3
4
3
5
6*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a;
	cin>>a;
	long long ar[a];
	for(int i=0; i<a; i++){
		cin>>ar[i];
	}
	//sort(ar, ar+a);
	for(int i=0; i<a; i++){
			cout<<ar[i]<<"\t";
	}
	long long i, j;
	for(i=0; i<a; i++){
		for(j=0; j<a; j++){
			if(ar[i]==ar[j]){
				cout<<ar[i]<<endl;
				break;
			}
		}
		if(ar[i]==ar[j]) break;
	}
	return 0;
}
