#include<iostream>
#include<time.h>
#include<string>
int mynum,rannum;
int x = 1;
int score = 100;
char P;
using namespace std;
int main(){
srand(time(NULL));
rannum = int (100 + rand() %501);
do{
do{
	cout << "Enter MyNum " << x << " : ";
	cin >> mynum;
	if (rannum == mynum){
		cout << "Rannum = "<<rannum<<endl;
		cout << "Congratulation in "<< x << " Time" <<endl;
		cout << "score + 20 = " << score + 20 << endl;
		score = score + 20;
	}
	else{
		if(mynum < rannum){
		cout << "MyNUM incorrect !! : Your Score = "<< score - 5 <<endl;
		score = score - 5;
		cout << "Mynum is less..."<<endl;
	}
	else if(mynum > rannum){
		cout << "MyNUM incorrect !! : Your Score = "<< score - 5 <<endl;
		score = score - 5;
		cout << "Mynum is more..."<<endl;;
	}
	if (score <= 0){
		cout << "==== Game Over ====" << endl;
		cout << " Your score = "<< score <<endl;
		rannum = mynum;
	}
}
	x = x++;
}while(rannum != mynum);
	do{ cout << "Do your want to play again ?? [Y/N] : ";
	cin >> P;
	if(P == 'Y'){
		cout << "======= Restart Game =======" <<endl;
}else if (P == 'N'){
		cout << "====== END PROGRAM ======" <<endl;
}else
		cout << "======Pls Enter Y/N======" << endl;
		x = 1;
		score = 100;
}while (P != 'N' && P != 'Y');
}while (P == 'Y');
	return(0);
}
