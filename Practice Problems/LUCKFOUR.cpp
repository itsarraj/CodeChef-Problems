
#include<bits/stdc++.h>
using namespace std;
int main(){


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif

    int t,num,B;
    cin>>t;
    for( int i = 0 ; i < t  ; i++){
        cin>>num;
        int count= 0 ;
        while(num){
        	int x=0;
        	x = num%10;
        	if(x == 4){
        		count++;
        	} 
        	num/=10;
        }
        cout<<count++<<endl;
    }
    return 0;
}
