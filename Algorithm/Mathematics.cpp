//============================================================================
// Name        : Mathematics.cpp
// Author      : Pankaj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

void evaluate(long long b){
	if (b % 2 == 0){
		long long var = 1LL * b * b / 4;
		cout<<var-1<<" "<<var+1<<endl;
	}
	else if (b % 2 != 0){
		long long var = 1LL * b * b + 1;
	    cout<<var/2-1<<" "<<var/2;
	}
}

int main(){
	long long b;
	cin>>b;
	evaluate(b);
	return 0;
}
