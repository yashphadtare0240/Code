#include <iostream>
using namespace std;

int main() {

    int arr[] = {3, 0, 1};
    int n = 3;

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum = actualSum + arr[i];
    }

    int missing = expectedSum - actualSum;

    cout << "Missing number = " << missing;

    return 0;
}