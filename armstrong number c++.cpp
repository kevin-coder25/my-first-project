#include <iostream>
using namespace std;
int main(){
	int num, orgnum, digit, sum=0;
	cout<<"enter 3 digit number: ";
	cin>>num;
	orgnum = num;
	while(num > 0){
		digit = num % 10;
		sum = sum + (digit * digit * digit);
		num = num / 10;
	}
	cout<<"answer: "<<sum<<endl;
	if(sum == orgnum)
	cout<<"armstrong number";
	else
	cout<<"not armstrong";
}
