#include<iostream>
using namespace std;

void rotatearray( int arr[], int n){
    int temp = arr[0];

    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main(){
    int arr[] = {2,4,6,8,9};
    int n = sizeof(arr) / sizeof(int);

    rotatearray(arr,n);

    cout<< "Roatated array: ";
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}