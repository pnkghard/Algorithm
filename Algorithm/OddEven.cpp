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
	int d=ar[a-1]-ar[0];
	cout<<d;
}
