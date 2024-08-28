// sum of all even numbers in the Fibonacci series till a given number n. Ex: for n = 100, fib series till 100 is [1,1,2,3,5,8,21,34,55,89]. Return sum of even numbers in it : 2+8+34 = 44

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int n;
    cin>>n;
    int c=-1;
    int sum=0;
    while(c<=n){
        c=a+b;
        a=b;
        b=c;
        if(c%2==0 && c<=n) sum+=c;
    }
    cout<<sum;

    return 0;
}
