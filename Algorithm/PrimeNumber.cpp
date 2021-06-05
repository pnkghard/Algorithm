#include <bits/stdc++.h>
#include <vector>
using namespace std;

int primeNumber(int l, long long r){
	int ans=0;
	while(l<=r){
		int f=1;
		if(l>3){
			for(int i=2;i<l;i++){
				if((l%i)==0){
					f=0;
					break;
				}
			}
		}
		if(f==1 and l!=1) ans++;
		l++;
	}
	cout<<ans<<endl;
}

int main(){
	int l;
	long long r;
	cin>>l>>r;
	primeNumber(l, r);
	return 0;
}
