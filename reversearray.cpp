#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int st = 0;
    int end = n-1;

    while(st < end){
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;

        st++;
        end--;
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);

    reverse(arr,n);

    cout<<"Reversed array: ";
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}