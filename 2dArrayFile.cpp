 #include<bits/stdc++.h>
using namespace std;
int main(){
    FILE *file;
    char name[20];
    int age;
    file=fopen("demo3.txt","a");
    if(file==NULL){
        cout<<"File does not exist"<<endl;
    }
    else{
        cout<<"File is opend"<<endl;
        cout<<"Enter your full name : ";
        gets(name);
        cout<<"Enter your age : "<<endl;
        cin>>age;
        fprintf(file,"Name : %s \nAge :%d",name,age);
        cout<<"FIle is written succesfully"<<endl;
    }
    return 0;
}

