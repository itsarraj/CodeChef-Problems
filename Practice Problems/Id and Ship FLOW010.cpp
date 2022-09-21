
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
    	char n;
    	cin>>n;
    	if ( n == 'b' || n == 'B'){
    		cout<<"BattleShip"<<endl;
    	}
    	else if ( n == 'c' || n == 'C'){
    		cout<<"Cruiser"<<endl;
    	}
    	else if ( n == 'd' || n == 'D'){
    		cout<<"Destroyer"<<endl;
    	}
    	else if ( n == 'f' || n == 'F'){
    		cout<<"Frigate"<<endl;
    	}

}
	return 0;
}
