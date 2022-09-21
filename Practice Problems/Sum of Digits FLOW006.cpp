#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,T;
    cin>>T;
    while(T--){
        cin>>N;
        int sum = 0 ;
        while(N){
            sum +=(N%10);
            N/=10;
        }
        cout<<sum<<endl;
    }
  
    return 0;
}
