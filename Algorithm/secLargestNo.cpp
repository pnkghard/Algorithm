#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, i;
	cin>>n;
	long long a[n];
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	cout<<a[n-2]<<endl;
}
