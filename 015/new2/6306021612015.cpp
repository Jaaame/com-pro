#include<iostream>
using namespace std ;
float arearect();
float areacirle();
int main(){
	char menu = ' ';
	while(menu != '0'){
		cout << "1.Rectangle \n";
		cout << "2.Circle\n";
		cout << "0.Exit \n";
		cout <<"Enter Meun : ";
		cin>>menu;
		if(menu == '1'){
			cout << "== Are of Rectangte ==" << endl;
		cout<< "Area = "<<arearect()<<endl;   
		}
		else if (menu == '2'){
			cout << "== Are of Circle =="<<endl;
		cout << "Area = "<<areacirle()<<endl;
		}
		else if (menu == '0'){
			cout<<"End Program"<<endl;}
		else
			cout<<"Error Pls Enter 0 - 2"<<endl;
	}
 return (0);
}
float arearect(){
	int width,length,sum;	
	cout << "Enter width : ";
			cin >> width;
			cout <<"Enter length : ";
			cin >> length;
			sum = width*length;
			return (sum);
	}
float areacirle(){
	int radius,c;	
	double pi=3.14;
	cout << "Enter radius : ";
			cin >> radius;
			c = pi*radius*radius;
			return (c);
}