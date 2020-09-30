#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int menu,num=0;
	int *qiz=new int[num];
	int *mid=new int[num];
	int *fin=new int[num];
	do{
		cout<<"==============================="<<endl;
		cout<<"              MENU             "<<endl;
		cout<<"==============================="<<endl;
		cout<<"     1.Input student records"<<endl;
		cout<<"     2.View all student records"<<endl;
		cout<<"     3.Exit"<<endl;
		cout<<"Select menu : ";
		cin>>menu;

		if(menu==1)
		{
		
			cout<<"Input Number of Student : ";
			cin>>num;
			for(int i=0;i<num;i++)
			{
				cout<<"Number "<<i+1<<endl;
				cout<<" Input Quiz : ";
				cin>>qiz[i];	
				cout<<" Input Midterm : ";
				cin>>mid[i];
				cout<<" Input Final : ";
				cin>>fin[i];
			}
		}

		if(menu==2)
		{
			cout<<"-----------------------------------"<<endl;
			cout<<"StdID"<<"\t"<<"Quiz"<<"\t"<<"Midterm"<<"\t"<<"Final"<<endl;
			cout<<"-----------------------------------"<<endl;
			for(int i=0;i<num;i++)
			{
				cout<<i+1<<"\t"<<qiz[i]<<"\t"<<mid[i]<<"\t"<<fin[i]<<endl;
			}
		}

	}while(menu!=3);


	system("pause");
	return(0);
}