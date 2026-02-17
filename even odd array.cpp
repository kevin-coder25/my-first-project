#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = 6;

    cout << "Even: ";
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            cout << arr[i] << " ";

    cout << "\nOdd: ";
    for(int i = 0; i < n; i++)
        if(arr[i] % 2 != 0)
            cout << arr[i] << " ";

    return 0;
}

