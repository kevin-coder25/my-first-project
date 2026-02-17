#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    for(int i = 0; i < n; i++) {

        // Check if arr[i] already appeared before
        bool isDuplicate = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate then print
        if(!isDuplicate) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

