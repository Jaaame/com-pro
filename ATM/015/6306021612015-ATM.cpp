#include<iostream>
using namespace std ;
int main (){
	int Specify,Deposit,Withdraw,sum;
	char menu = ' ';
	while(menu != '0'){
		cout << "1.Register \n";
		cout << "2.Deposite\n";
		cout << "3.Withdraw \n";
		cout << "0.Exit \n";
		cout <<"Enter Meun : ";
		cin>>menu;
		if(menu == '1'){
			cout << "== Register ==" << endl; 
			cout << "Specify the amount : ";
			cin >> Specify;	
			cout << "Total = "<<(sum=Specify)<<endl;
		}
		else if (menu == '2'){
			cout << "== Deposite =="<<endl;
			cout << "Deposit money : ";
			cin >> Deposit;
			cout << "Total = " << (sum=Specify + Deposit) <<endl;
		}
		else if (menu == '3'){
			cout <<"== Withdraw =="<<endl;
			cout <<"Withdraw money : ";
			cin >> Withdraw;
			sum = Specify + Deposit - Withdraw ;
			if (Withdraw > Specify + Deposit ){
				 cout << "Error"<<endl;
			 }
			 else
				 cout << "Success\n";
				 cout << "Your balance = "<< sum <<endl;
			 }
		else if (menu == '0'){
			cout<<"Exit"<<endl;}
		else
			cout<<"Error Pls Enter 0 - 3"<<endl;
	}
	}