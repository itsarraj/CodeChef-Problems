#include<bits/stdc++.h> 
using namespace std;


int main(){
    cout.precision(2);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif

int x,n;
cin >> x;
while (x--)
{
	cin>>n;
	int sum = 0;
		sum+=n%10;
	while(n>9){
		n/=10;
	}
	sum+=n;
	cout<<sum<<endl;
}
return 0;
}