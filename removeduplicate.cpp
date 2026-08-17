#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,11,11,14,14,14,16,16,18};
    int n = sizeof(arr)/sizeof(int);

    int newarr[n];

    int j = 0;

    newarr[j] = arr[0];
    j++;

    for (int i=0; i<n; i++){
        if(arr[i] != arr[i-1]){
            newarr[j] = arr[i];
            j++;
        }
    }

    cout<< " Array without duplicates: ";
    for(int i=1; i<j; i++){
        cout<<newarr[i]<<" ";
    }
    return 0;
}