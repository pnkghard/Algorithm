/*
 1
5 25
10 25 25 25 35
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n, key, j, ans=0;
		cin>>n>>key;
		for(i=0; i<n; i++){
			cin>>j;
			if(j==key) ans++;
		}
		cout<<ans<<endl;
	}
}
