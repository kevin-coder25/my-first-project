#include <iostream>
using namespace std;

//sum of all marks
int sum_marks(int mark[], int n){
	int sum = 0;
	for (int i=0; i<n; i++){
		sum += mark[i];
	}
	return sum;
}
//highest and lowest marks
void position(int mark[], int n){
	
	int highest = mark[0];
	int lowest = mark[0];
	
	for (int i=1; i<n; i++){
		if (mark[i] > highest){
			highest = mark[i];
		}
		if (mark[i] < lowest){
			lowest = mark[i];
		}
	}
		
	cout<<"\nHighest marks = "<<highest;
	cout<<"\nLowest marks = "<<lowest;
}
//passed students
void passed_student(int mark[], int n){
	int pass = 0;
	for (int i=0; i<n; i++){
		if (mark [i] >= 50){
			pass ++;
		}
	}
	cout<<"\nNumber of passed student = "<<pass;
}
//grades of students
void grades(int mark[], int n){
	int a = 0, b=0, c=0, d=0;
	for (int i=0; i<n; i++){
		if (mark[i] >= 80){
			a ++;
		}else if (mark [i] >= 70 && mark[i] <80){
			b++;
		}else if (mark [i] >= 60 && mark[i] < 70){
			c++;
		}else if (mark[i] >=50 && mark [i] <60){
			d++;
		}
	}
	cout<<"\nGrade of students w.r.t marks\n";
	cout<<"\nGrade A = "<<a;
	cout<<"\nGrade B = "<<b;
	cout<<"\nGrade C = "<<c;
	cout<<"\nGrade D = "<<d;
}

int main(){
	
	int n;			//how many students 
	cout<<"How many students are: ";
	cin>>n;
	if (n <= 0){
		cout<<"\nEnter valid number of students.";
	}
	cout<<"\n";
	int marks[n];	//depends on students
	int count = 0;	//count valid numbers
	for(int i=0; i<n; i++){
		int m;
		cout<<"Marks of student no. "<<i+1<<" = ";
		cin>>m;
		if(m>=0 && m<=100){
			marks[count]= m;
			count ++;
		}
		cout<<"\n";
	}
	char choice;
	do {
		int selection;
		cout<<"\nChoose an option\n";
		cout<<"\n1. Showing all marks of students\n";
		cout<<"2. Average of all marks of students\n";
		cout<<"3. Highest and Lowest marks\n";
		cout<<"4. Number of Passed Students\n";
		cout<<"5. Grades (A,B,C,D)\n";
		cin>>selection;
		
		switch (selection){
			case 1: {
				cout<<"\nAll marks of students:\n";
				for (int i=0; i<n; i++){
					cout<<marks[i]<<" ";
				}
				break;
			}
			case 2: {
				float average = float(sum_marks(marks,n))/ float(count);
				cout<<"\nAverage of all marks = "<<average;
				break;
			}
			case 3: {
				
				cout<<"\nHighest & Lowest marks:\n";
				position(marks,n);
				
				break;
			}
			case 4: {
				cout<<"\nPassed Students:\n";
				passed_student(marks, n);
				break;
			}
			case 5: {
				cout<<"\nGrades of students:\n";
				grades(marks,n);
				break;
			}
		}
		cout<<"\nWould you like to check again (y\n)";		//choice variable value
		cin>>choice;	
	}while (choice == 'y' || choice == 'Y');
	return 0;
}
