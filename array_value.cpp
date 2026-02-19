#include <iostream>
using namespace std;

int main(){
    int arr[5];
    for (int i=0; i<5; i++){
        cout<<"Enter value"<<i+1<<" : ";
        cin>>arr[i];
        cout<<"\n";
    }
    cout<<"\nOutput\n";
    for (int i=0; i<5; i++){
        cout<<"Value No"<<i+1<<" = "<<arr[i];
        cout<<endl;
    }
    return 0;
}