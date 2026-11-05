#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,n,m,sum;
	cin>>n;
	m=n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n;
	sum=pow(a,3)+pow(b,3)+pow(c,3);
	
	if(sum==m){
	    cout<<"armstrong number";}
	    else{
	        cout<<"not armstrong number";
	    }
	}
