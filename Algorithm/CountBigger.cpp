#include<bits/stdc++.h>
#include<vector>
using namespace std;

/*5
10 11 12 44 66
22*/

int main(){
	std::vector <int> a;
	int n, b, ans=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>b;
		a.push_back(b);
		//cout<<a[i];
	}
	cin>>b;
	for(int i=0; i<n; i++){
		if(a[i]>b) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
