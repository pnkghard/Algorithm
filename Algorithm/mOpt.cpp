#include<bits/stdc++.h>
using namespace std;

int module(long long n){
	long long mod[n];
	int f=0;
	for(int i=0; i<n; i++){
		cin>>mod[i];
		if(mod[i]==n){
			f=1;
		}
	}
	if(f==0) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
	return -1;
}

int main(){
	long long n;
	cin>>n;
	module(n);
}

/*5
4
2
3
5
12*/

//Yes
