#include<bits/stdc++.h> 
using namespace std;


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif

int t,n;
cin>>t;
while(t--){
	int revnum , m ;
	cin>>n;
	while(n){
		m = n%10;
		revnum = 10*revnum+m;
		n/=10;
	}
	cout<<revnum<<endl;
	revnum = 0;
}
return 0;
}