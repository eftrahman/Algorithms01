#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[], int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] ={2,4,0,1,9,5,6,3,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter Element : ";
    cin>>x;
    int result = binarySearch(arr, x, 0, n - 1);
    if (result == -1)
        cout<<"Not found"<<endl;
    else
        cout<<"Element at "<<result<<"th index";
    return 0;
}
