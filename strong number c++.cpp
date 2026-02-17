#include <iostream>
using namespace std;

int main() {
    int num, original, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num > 0) {
        int digit = num % 10;
        int fact = 1;

        for(int i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        num /= 10;
    }

    if(sum == original)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}

