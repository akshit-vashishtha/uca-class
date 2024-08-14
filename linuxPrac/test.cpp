#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0;
	int n;
	cout<<"enter the number upto till you want the sum: "<<endl;
	cin>>n;
	for(int i = 0 ;i<n; ++i){
		a+=i;
	}
	cout<<"the sum from 1 to "<< n <<" is: "<<a<<endl;
	return 0;
}
