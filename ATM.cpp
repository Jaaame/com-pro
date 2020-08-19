#include<iostream>
using namespace std;
int balance,balance2,acct,acc1,acc2;
float regis();
float depo();
float withd();
float show();

int main()
{
	int cash;
	do{
		cout<<"==== Net Banking ====";
	    cout<<"\n1.Register";
	    cout<<"\n2.Deposite";
		cout<<"\n3.Withdraw";
		cout<<"\n4.Show Balance";
	    cout<<"\n0.Exit";
	    cout<<"\nChoose Option : ";
	    cin>>cash;

	switch(cash){
	case 1 :
		cout<<"Register"<<endl;
		regis();
		break;
	case 2 :
		cout<<"Deposite"<<endl;
		depo();
		break;
	case 3 :
		cout<<"Withdraw"<<endl;
		withd();
		break;
	case 4 :
		cout<<"Show Balance"<<endl;
		show();
		break;
	case 0 :
		cout<<"Exit Program"<<endl;
		break;
	default :
		cout<<"Please input [0-4]"<<endl;
		break;}
	}
	while(cash!=0);
	return(0);
}
float regis()
{
	cout<< "Enter Account 1 ID : ";
	cin >> acc1;
	cout<<"Enter Your Account Opening Balance : ";
	cin>>balance;
	cout<<"Your Total Balance is "<<balance<<endl;
	cout<< "Enter Account 2 ID : ";
	cin >> acc2;
	cout<<"Enter Your Account Opening Balance : ";
	cin>>balance2;
	cout<<"Your Total Balance is "<<balance2<<endl;
	return(balance,balance2);
}
float depo()
{
	int add; 
	cout << "Enter Your Account : ";
	 cin >> acct;
	if(acct == acc1){
	 cout<<"Enter Your Deposite Money Account 1  : ";
	 cin>>add;
	 cout<<"Your Total Balance Account  is "<<balance+add<<endl;
	 balance=balance+add;}
    	else if (acct == acc2){
	 cout<<"Enter Your Deposite Money Account 2  : ";
	 cin>>add;
	 cout<<"Your Total Balance Account  is "<<balance2+add<<endl;
	 balance2=balance2+add;}
	    else
			cout<<"Not Account ";
	 return(0);
}
float withd()
{
	int dec;
	cout<<"Enter Your Account : ";
	cin>>acct;
	if(acct==acc1)
	{cout<<"Enter Your Withdraw Money Account 1 : ";
	cin>>dec;
	if(balance>=dec){
	cout<<"Your Total Balance is "<<balance-dec<<endl;
	balance=balance-dec;
	}
	else
	{cout<<"Your don't have enough balance to withdraw"<<endl;}
	}
	else if(acct==acc2)
	{cout<<"Enter Your Withdraw Money Account 2 : ";
	cin>>dec;
	if(balance2>=dec){
	cout<<"Your Total Balance is "<<balance2-dec<<endl;
	balance2=balance2-dec;
	}
	else
	{cout<<"Your don't have enough balance to withdraw"<<endl;}
	}
	else
		cout<<"ID not found "<<endl;
	return(0);
}
float show()
{
	cout<<"Balance Account 1: "<< balance << endl;
	cout<<"Balance Account 2: "<< balance2 << endl;
	return(balance);
}