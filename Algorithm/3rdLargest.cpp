#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	int ar[a];
	for(int i=0; i<a; i++){
		cin>>ar[i];
	}
	sort(ar, ar+a);

	cout<<ar[a-3]<<endl;
	return 0;
}
