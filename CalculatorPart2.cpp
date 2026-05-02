#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double firstNumber, secondNumber;
	int choice;
	bool valid;
	
	
	cout<<"Calculator part 2 : More efficient la kot"<<"\n";
	cout<<"------------------------------------------"<<"\n""\n";
	
	cout<<"Enter your first number : ";
	cin>> firstNumber;
	
	cout<<"Enter your second number : ";
	cin>> secondNumber;
	
	cout<<"\n";

	
	do {
		cout<<"Please Choose operation (1 = add, 2 = subtract, 3 = multiply, 4 = divide): ";
		cin>> choice;
	
		cout<<"\n""\n";
	
	if(cin.fail()|| choice < 1 || choice > 4) {
	   	cin.clear();
	   	cin.ignore(1000, '\n');
	   	cout<<"Invalid input, please put only from 1 - 4."<<"\n""\n";
	   	valid = false;
	}else {
		valid = true;
		}
	}while (!valid);
	
	
	if (choice == 1){
		firstNumber + secondNumber;
	}else if (choice == 2){
		firstNumber - secondNumber;
	}else if (choice == 3){
		firstNumber * secondNumber;
	}else if (choice == 4){
		firstNumber / secondNumber;
	}
	
	if (choice == 1){
		cout<<"Total is : "<< firstNumber + secondNumber;
	}else if (choice == 2){
		cout<<"Total is : "<< firstNumber - secondNumber;
	}else if (choice == 3){
		cout<<"Total is : "<< firstNumber * secondNumber;
	}else if (choice == 4){
		cout<<"Total is : "<< firstNumber / secondNumber;
	}
	

	return 0;
}
