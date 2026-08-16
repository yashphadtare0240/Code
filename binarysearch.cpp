#include<iostream>
using namespace std;

int binarysearch(int *arr, int n, int key){
    int st = 0;
    int end = n-1;

    while(st <= n){
        int mid = (st + end)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            st = mid +1;
        }else {
            end = mid -1;
        }
    }
}

int main(){
    int arr[] = {10,12,14,16,20,24};
    int n = sizeof(arr)/sizeof(int);

    cout<<binarysearch(arr, n, 20)<< endl;

    return 0;
}