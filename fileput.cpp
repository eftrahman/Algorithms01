#include<bits/stdc++.h>
using namespace std;
int main(){
    FILE *testFile;
    int graph[5][5]={{0,4,0,5,2},{4,0,1,3,0},{0,1,0,8,0},{5,3,0,0,2},{2,0,0,2,0}};
    //gets(name);
    //int length = strlen(name);
    int i,j;
    testFile =  fopen("testF.txt","w");
    if(testFile==NULL){
        printf("File doesn't exist");
    }
    else{
        printf("file created");
        for(i=0;i<5;i++){
                for(j=0;j<5;j++){
                    putw(graph[i][j],testFile);
                }
        }
        printf("\nthe file written succesfully");
        fclose(testFile);
    }
    return 0;
}

