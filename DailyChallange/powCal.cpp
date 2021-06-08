#include<bits/stdc++.h>
using namespace std;

int pow(int b, int p){
    if(p==0) return 1;
    else if(p==1) return b;
    else return b*pow(b, p-1);
}

int main(){
    int b,p;
    cin>>b>>p;
    cout<<pow(b,p);
    return 0;
}