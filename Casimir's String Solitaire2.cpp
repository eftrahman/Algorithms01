#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    char s[t][50];
    for(int i=0;i<t;i++){
        cin>>s[i];
        if(strlen(s[i])%2>0){
            cout<<"no";
        }
    }
return 0;
}
