#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin>>s;
    string str[s];
    for(int i=0; i<s; i++) cin>>str[i]; //String input
    //arrange string alphabatical
    sort(str, str+s);
    for(int i=0; i<s; i++) cout<<str[i]<<endl;
    return 0;
}