#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    const unsigned int M = 1000000007;
    long long sum=1;
    cin>>T;
    while(T--){
        cin>>N;
        long long A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
            sum=(sum*(A[i]+1))%M;
        }
        cout<<sum-1<<endl;
        sum=1;
    }
    return 0;
}
