#include <iostream>
using namespace std;

void rotatearray(int arr[], int n, int k) {

    k = k % n;   

    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {

    int arr[] = {2, 4, 6, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    int k = 2;

    rotatearray(arr, n, k);

    cout << "Rotated array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}