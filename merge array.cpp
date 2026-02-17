#include <iostream>
using namespace std;

int main() {
    int arr1[] = {4,5,6};
    int arr2[] = {7,8,9};

    int n1 = 3, n2 = 3;
    int merge[n1 + n2];

    for(int i = 0; i < n1; i++)
        merge[i] = arr1[i];

    for(int i = 0; i < n2; i++)
        merge[n1 + i] = arr2[i];

    for(int i = 0; i < n1 + n2; i++)
        cout << merge[i] << " ";

    return 0;
}

