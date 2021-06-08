#include<bits/stdc++.h>
using namespace std;

//Sorting function
int selSort(int a){
    int arr[a];
    for(int i=0; i<a; i++) cin>>arr[i];
    int min;
	for(int j=0; j<a-1; j++){
		min = j;
		for(int k=j+1; k<=a-1; k++){
			if(arr[k] < arr[min])
				min = k;
		}
		int temp = arr[min];
		arr[min] = arr[j];
		arr[j] = temp;
    }
    for(int i=0; i<a; i++) cout<<arr[i]<<" ";
    return 1;
}

int main() {
    int a;
    cin>>a;
    selSort(a);
    return 0;
}

/*6
11 9 7 6 12 14
6 7 9 11 12 14*/