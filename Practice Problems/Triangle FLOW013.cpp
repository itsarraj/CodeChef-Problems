
#include<bits/stdc++.h>
using namespace std;
int main(){


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif

    int t;
    cin>>t;
    for( int i = 0 ; i < t  ; i++){
    	int a,b,c;
    	cin>>a>>b>>c;
    	if ( ( a + b + c ) == 180 ){
    		cout<<"YES"<<endl;
        }
        else 
        	cout<<"NO"<<endl;

    	}
	return 0;
}
