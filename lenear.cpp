#include<bits/stdc++.h>
using namespace std;
int linearSearch(int array[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (array[i] == x)
        return i;
    return -1;
}
int main() {
    int arr[] = {2,4,0,1,9,5,6,3,11};
    int x;
    cout<<"Enter Element : ";
    cin>>x;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
    if(result==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Element at "<<result<<" index."<<endl;
    }
  //(result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}
