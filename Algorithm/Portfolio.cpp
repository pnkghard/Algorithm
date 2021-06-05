/*5
5 5
2 7
8 10
10 20
4 5*/

/*0
5
-1
8
0*/


#include <bits/stdc++.h>
#include <vector>
using namespace std;

int primeNumber(int l, long long r){
	std::vector< long long > ar;
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
		if(f==1) ar.push_back(l);
		l++;
	}
	int d;
	if(ar.size()>0) d=ar[ar.size() - 1] - ar[0];
	cout<<d<<endl;
	d=0;
}

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int l;
		long long r;
		cin>>l>>r;
		primeNumber(l, r);
	}
	return 0;
}
