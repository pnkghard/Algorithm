#include<bits/stdc++.h>
#include <sstream>
#include <typeinfo>
using namespace std;

int main(){
	string s;
	cin>>s;
	stringstream iData(s);
	int x = 0;
	iData >> x;
	cout << typeid(x).name();
	return 0;
}
