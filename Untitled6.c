#include<stdio.h>
int main(){
    FILE *testFile;
    testFile =  fopen("testF.docx","w");
    if(testFile==NULL){
        printf("File doesn't exist");
    }
    else{
        printf("file created");
        fclose(testFile);
    }
    getch();
}
