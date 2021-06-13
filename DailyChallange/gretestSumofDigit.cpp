// # Compare two numbers : you will take two integers input, sum the digits of a number and same is to be done with another number.
// # Then compare the sum of the digits of two numbers and if one sum found to be greater then print that number.
// # If found both sum to be equal then print 'Equal' to the stdout. 

// # Constraints : 1 < (a,b) < 10^9
// # Input : 345678   444444
// # Output : 345678

#include<bits/stdc++.h>
using namespace std;

int greatSum(long n, long m){
    long a, b;
    a=n;
    b=m;
    long x = 0;
    long y = 0;
    while (n!=0) {
        x = x + n%10;
        n /= 10;
    }
    while (m!=0) {
        y = y + m%10;
        m /= 10;
    }
    if (x>y) cout<<a;
    else if(y>x) cout<<b;
    else cout<<"Equal";
    return 0;
}

int main() {
    long n, m;
    cin>>n>>m;
    greatSum(n, m);
    return 0;
}

// def greatSum(n, m):
//     a, b = n, m
//     x = 0
//     y = 0
//     while n!=0:
//         x = x + n%10
//         n //= 10
//     while m!=0:
//         y = y + m%10
//         m //= 10
//     if x>y :
//         return a
//     elif(y>x) :
//         return b
//     else :
//         return "Equal"

// def main():
//     n, m = int(input()), int(input())
//     print(greatSum(n, m))
// main()