#include<bits/stdc++.h>
#include<string>
using namespace std;

int count(string s){
	int i=0, u=0, l=0;
	while(i<s.length()) {
		if(s[i]>='A' && s[i]<='Z') u++;
		if(s[i]>='a' && s[i]<='z') l++;
		i++;
	}
	cout<<u<<"\n"<<l<<endl;
	return 0;
}

int main(){
	string s;
	getline(cin,s);
	count(s);
	return 0;
}
