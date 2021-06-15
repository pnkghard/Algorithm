/* Find next paledorme number which even in digit*/

# include <bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int paliDrome(int n) {

    int k = n;
    int r = 0;
    while(k > 0) {
        r = k%10;
        n = (n*10) + r;
        k /= 10;
    }
    if((countDigit(n)&1) == 0) return n;
    paliDrome(n);

}

int main() {

    int n;
    cin>>n;
    cout<<paliDrome(n);

    return 0;

}