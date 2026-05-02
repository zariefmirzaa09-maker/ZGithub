#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	string s1,s2,s3,s4,s5,s6,s7,s8;
	double p1,p2,p3,p4,p5,p6,p7,p8;
	double gpa;
	double chr1,chr2,chr3,chr4,chr5,chr6,chr7,chr8;
	bool x = 1;
	bool y = 0;
	
	cout<< "GPA Calculator"<<"\n""\n";
	
	cout<< "Subject 1 : ";
	getline(cin, s1);
	cout<<"Grade points : ";
	cin>>p1;
	cout<<"Credit Hour : ";
	cin>>chr1;
	
	cin.ignore();
	cout<<"\n";
	
	cout<< "Subject 2 : ";
	getline(cin, s2);
	cout<<"Grade points : ";
	cin>>p2;
	cout<<"Credit Hour : ";
	cin>>chr2;
	
	cin.ignore();
	cout<<"\n";
	
	cout<< "Subject 3 : ";
	getline(cin, s3);
	cout<<"Grade points : ";
	cin>>p3;
	cout<<"Credit Hour : ";
	cin>>chr3;
	
	cin.ignore();
	cout<<"\n";
	
	cout<< "Subject 4 : ";
	getline(cin, s2);
	cout<<"Grade points : ";
	cin>>p4;
	cout<<"Credit Hour : ";
	cin>>chr4;
	
	cin.ignore();
	cout<<"\n";
	
	cout<<"Do you have more course? "<<"\n";
	cout<<"Yes or No?";
	cin>>x,y;
	
	cout<< "Subject 5 : ";
	getline(cin, s5);
	cout<<"Grade points : ";
	cin>>p5;
	cout<<"Credit Hour : ";
	cin>>chr5;
	
	cin.ignore();
	cout<<"\n";
	
	cout<< "Subject 6 : ";
	getline(cin, s6);
	cout<<"Grade points : ";
	cin>>p6;
	cout<<"Credit Hour : ";
	cin>>chr6;
	
	cin.ignore();
	cout<<"\n";
	
	cout<< "Subject 7 : ";
	getline(cin, s7);
	cout<<"Grade points : ";
	cin>>p7;
	cout<<"Credit Hour : ";
	cin>>chr7;
	
	cin.ignore();
	cout<<"\n";
	
	cout<< "Subject 8 : ";
	getline(cin, s8);
	cout<<"Grade points : ";
	cin>>p8;
	cout<<"Credit Hour : ";
	cin>>chr8;
	
	cout<<"\n";
	
	double totalchr = chr1 + chr2 + chr3 + chr4 + chr5 + chr6 + chr7 + chr8;
	cout<<"Total Credit Hour : "<< totalchr << "\n""\n";
	gpa = ((p1 * chr1) + (p2 * chr2) + (p3 * chr3) + (p4 * chr4) + (p5 * chr5) + (p6 * chr6) + (p7 * chr7) + (p8 * chr8)) / totalchr ;
	cout <<"GPA : " << gpa << "\n";
	
	cout<<"\n";
	
	//GPA status
	if (gpa>2){
		cout<<"Status : Pass";
	}else {
		cout<<"Status : Fail";
	}
	
	cout<<"\n";
	
	//Notes
	if (gpa>3.5){
		cout<<"Note : Congratulations, You are on the dean\'s list";
	}else if (gpa>2){
		cout<<"Note : Congratulations, Goodluck on upcoming semesters";
	}else {
		cout<<"Note : Please refer to AMAD for further information";
	}
	
	return 0;
}
	
