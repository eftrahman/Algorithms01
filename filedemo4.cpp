 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    FILE *F;
    char name[20];
    char ch[200];
    int age;
    int mtx[5][5];
    F=fopen("F.txt","a");
    if(F==NULL){
        cout<<"File Not Created";
    }
    else{
        cout<<"File has Opened"<<endl;
        cout<<"Enter your full name : ";
        //gets(name);
        cout<<"Enter your Age : ";
        //cin>>age;
        /*for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cin>>mtx[i][j];
                fprintf(F,"%d\t",mtx[i][j]);
            }
            fprintf(F,"\n");
        }*/
        fprintf(F,"name : %s\nAge : %d\n",name,age);
        cout<<"File is written Succesfully"<<endl;
        F=fopen("F.txt","r");
        /*while(!feof(F)){
            ch=fgetc(F);
            cout<<ch;
        }*/
        while(feof(F)){
            fgets(ch,120,F);
            cout<<ch<<endl;
        }
    }
    return 0;
 }
