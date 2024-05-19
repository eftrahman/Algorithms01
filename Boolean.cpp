#include<bits/stdc++.h>
using namespace std;
int main(){
    bool A=false;
    bool B=true;
    bool c=!(A&B);
    bool d=!(A|B);
    bool e=A^B;
    //printf("%B\n%B",&c,&d);
    cout<<c<<endl<<d<<endl<<e<<endl;

    return 0;
}
