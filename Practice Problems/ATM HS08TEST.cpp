#include<bits/stdc++.h> 
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif
 int a;
 float b;
 cin>>a>>b;
 if(a%5==0&&a<=b-0.5) 
    b=b-a-0.50;
 cout<<fixed<<setprecision(2)<<b;
 return 0;
}
