#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 3, 4, 2, 3};
    int n = 5;

    int freq[5] = {0};

    for (int i = 0; i < n; i++) {

        freq[arr[i]]++;

        if (freq[arr[i]] == 2) {
            cout << "Duplicate number = " << arr[i];
            break;
        }
    }

    return 0;
}