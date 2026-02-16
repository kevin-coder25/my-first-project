#include <iostream>
using namespace std;

int main(){
    int n =6;
    cout<<"Table of "<<n;
    cout<<"\n\n";
    for (int i=0; i<10; i++){
        cout<<n<<" x "<<i+1<<" = "<<(i+1)*n<<endl;
    }
    return 0;
}