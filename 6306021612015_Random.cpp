#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int num,min = 0,max = 0 ,aver = 0,sum = 0;
	for(int i = 0 ; i < 10 ; i++)
	{
		num = rand();
		cout << num << endl ;
		if (i == 0){
			min = num;
		}
		if (num <= min ){
			min = num;
		}
		else if (num >= max){
			max = num;
		}
		sum += num;
		
	}
	aver = sum/10;
	cout << "min  : " << min << endl;
	cout << "max  : " << max << endl;
	cout << "average  : " << aver << endl;
	return(0);
}