#include<iostream>
using namespace std;

int linearsearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,15,13,20,18};
    int n = sizeof(arr)/sizeof(int);

    cout<< linearsearch(arr, n, 20)<< endl;

    return 0;
}