#include <iostream>
#include <string>
#include<windows.h> //sleep 
#include<stdlib.h> //clear screen
using namespace std;
struct ticket
{
	string name,starting,ending,classs;
	int seat,x,z;
	long long int num,cnic;
}size[5];
int z=0; 
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);  //line color change
int amount,x,seat;
void design()
{	
	SetConsoleTextAttribute(h,10);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
void front()
{ 	SetConsoleTextAttribute(h,14);
    cout<<".......................WELCOME TO PAKISTAN RAILWAY RESERVATION SYSTEM.......................\n";
}
int classs()
{
	system ( "color 02" );
	design();	
	cout<<"\t\tFirst Class : Fare + 30 % of Fare  Press 1"<<endl;
	cout<<"\t\tSecond Class: Fare + 20 % of Fare Press 2"<<endl;
	cout<<"\t\tEconomy class : Fare + 10 % of Fare Press 3 "<<endl;
	design();
	SetConsoleTextAttribute(h,12);
	cout<<"\n\t\tSelect Your Class: ";
	cin>>seat;
	return seat;
}
int fare (string starting ,string ending)
{
	if (starting=="peshawar"&&ending=="karachi")
	{
		amount=2500;
	}
	else if (starting=="peshawar"&&ending=="attock")
	{
		amount=150;
	}
	else if (starting=="peshawar"&&ending=="rawalpindi")
	{
		amount=300;
	}
	else if (starting=="peshawar"&&ending=="gujrat")
	{
		amount=1000;
	}
	else if (starting=="peshawar"&&ending=="lahore")
	{
		amount=1500;	
	}
	else if (starting=="peshawar"&&ending=="multan")
	{
		amount=1800;	
	}
	else if (starting=="peshawar"&&ending=="sukkur")
	{
		amount=2000;	
	}
	else if (starting=="attock"&&ending=="karachi")
	{
		amount=2200;	
	}
	else if (starting=="attock"&&ending=="sukkur")
	{
		amount=1700;	
	}
	else if (starting=="attock"&&ending=="multan")
	{
		amount=1500;	
	}
	else if (starting=="attock"&&ending=="khanewal")
	{
		amount=1600;	
	}
	else
	{
		cout<<"\n\t\tSorry You Entered Invalid Station"<<endl;
		amount=0;
	}
	return amount;	
}
int increase(int seat)
{
	if (seat==1)
	{
		x=amount+(amount*30)/100;
	}
	else if (seat==2)
	{
		x=amount+(amount*20)/100;	
	}
	else
	{
		x=amount+(amount*10)/100;
	}
	return x;
}
void prnt(int seat)
{
	if(seat==1)
	{
		size[z].classs=" First Class ";
	}
	else if (seat==2)
	{
			size[z].classs=" Second Class ";
	}
	else
	{
			size[z].classs=" Economy Class ";
	}
	
}
bool seatsfull()
{
	if(z==5)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void newticket(string name,string starting ,string ending,int seat,long long int cnic,long long int num)
{
		size[z].z=z;
		size[z].seat=seat;
		prnt(seat);
		size[z].name = name;
		size[z].cnic = cnic;
		size[z].starting = starting;
		size[z].ending = ending;
		size[z].num = num;
		size[z].x=x;
		z++;
}
void printticket()
	{
		if(z == 0)
	{
		cout<<"\n Enter Information to Generate ticket  \n";
	}
	else
	{
		system("cls");
		system ( "color 05" );
		Sleep(1000);
		design();
		front();
		design();
		cout<<"\t\tTicket Number :\t\t"<<size[z-1].z<<endl;
		cout<<"\n\tName:\t\t\t"<<size[z-1].name;
		cout<<"\t\tCNIC:\t"<<size[z-1].cnic <<endl;
		cout<<"\tClass:\t\t\t"<<size[z-1].classs<<endl;
		cout<<"\tStarting Station:\t"<<size[z-1].starting ;
		cout<<"\t\tEnding Station:\t"<<size[z-1].ending <<endl;
		cout<<"\n\tNumber:\t\t\t"<<size[z-1].num <<endl;
		cout<<"\n\t\tFare:\t\tRs "<<size[z-1].x <<endl;
		design();	
	}
}
void searchbyName(string name)
{
	if(z==0)
	{
		cout<<"\nNo Ticket is Generated Yet\n";
	}
	else
	{
			bool flag=true;
			for(int i =0;i<z;i++)
		{
			if (size[i].name==name)
			{
				system("cls");
				system ( "color A" );
				design();
				front();
				design();
				cout<<"\t\tTicket Number :\t\t"<<size[i].z<<endl;
				prnt(seat);
				cout<<"Name:\t\t\t"<<size[i].name;
				cout<<"\t\tCNIC:\t"<<size[i].cnic <<endl;
				cout<<"Class:\t\t"<<size[z].classs<<endl;
				cout<<"Starting Station:\t"<<size[i].starting ;
				cout<<"\t\t\t\tEnding Station:\t"<<size[i].ending <<endl;
				cout<<"\nNumber:\t\t\t"<<size[i].num <<endl;
				cout<<"Fare:\t\t"<<size[i].x <<endl;
				design();
				flag=false;
				break;
			}
		}
			if(flag)
		{
			cout<<"\n \tThere is No any "<<"\""<<name<<"\""<<" ticket Generated yet."<<endl;
		}
									
}
}
void searchbycnic(long long int cnic)
{
	if(z==0)
	{
		cout<<"\narray is empty";
	}
	else
	{
			bool flag=true;
			for(int i =0;i<z;i++)
		{
			if (size[i].cnic==cnic)
			{
				system("cls");
				system ( "color 03" );
				design();
				front();
				design();
				cout<<"Ticket Number :\t\t"<<size[i].z<<endl;
				cout<<"Class:\t\t\t"<<size[i].classs<<endl;
				cout<<"Name:\t\t\t"<<size[i].name;
				cout<<"\t\tCNIC:\t"<<size[i].cnic <<endl;
				cout<<"Class:\t\t\t"<<size[z].classs<<endl;
				cout<<"Starting Station:\t"<<size[i].starting ;
				cout<<"\t\t\tEnding Station:\t"<<size[i].ending <<endl;
				cout<<"Number:\t\t\t"<<size[i].num <<endl;
				cout<<"Fare:\t\t\t"<<size[i].x <<endl;
				design();
				flag=false;
				break;
			}
		}
		if(flag)
		{
			cout<<"\n \tThere is No any "<<"\""<<cnic<<"\""<<" ticket Generated yet."<<endl;
		}
}
}
void searchbynum(long long int num)
{
	if(z==0)
	{
		cout<<"\narray is empty";
	}
	else
	{
			bool flag=true;
			for(int i =0;i<z;i++)
		{
			if (size[i].num==num)
			{
				design();
				front();
				design();
				cout<<"Ticket Number :\t\t"<<size[i].z<<endl;
				prnt(seat);
				cout<<"Name:\t\t\t"<<size[i].name;
				cout<<"\t\tCNIC:\t"<<size[i].cnic <<endl;
				cout<<"Class:\t\t\t"<<size[i].classs<<endl;
				cout<<"Starting Station:\t"<<size[i].starting ;
				cout<<"\t\t\tEnding Station:\t"<<size[i].ending <<endl;
				cout<<"Number:\t\t\t"<<size[i].num <<endl;
				cout<<"Fare:\t\t\t"<<size[i].x <<endl;
				design();
				flag=false;
				break;
				
			}
		}
		if(flag)
		{
			cout<<"\n \tThere is No any "<<"\""<<num<<"\""<<" ticket Generated yet."<<endl;
		}						
}
}

int main()
{
	
	char choice;
	do
	{
		int d;
		cout<<"\n\n";
		design();
		front();
		design();
		Sleep(1000);
		cout<<"\n\n";
		cout<<"\t\tEnter 1 To Check all station and fares of it "<<endl;
		cout<<"\t\tEnter 2 to Generate Ticket "<<endl;
		cout<<"\t\tEnter 3 to search ticket by Name "<<endl;
		cout<<"\t\tEnter 4 to search ticket by cnic "<<endl;
		cout<<"\t\tEnter 5 to search ticket by Phone Number "<<endl;
		cout<<"\t\tEnter 6 to Exit The Program "<<endl;
		cout<<"\n\t\tEnter Your Choice : ";
		cin>>d;
		switch (d)
		{
			case 1:
				{
					SetConsoleTextAttribute(h,12);
					system("cls");
					design();
					front();
					design();
					cout<<"\n\n";
					cout<<"\t\tPeshawar to Karachi     	:\t Fare\t 2500 "<<endl; 
					cout<<"\t\tPeshawar to Attock  		:\t Fare\t 150 "<<endl;
					cout<<"\t\tPeshawar to Rawalpindi          :\t Fare\t 300	"<<endl;
					cout<<"\t\tPeshawar to Gujrat   \t   	:\t Fare\t 1000 "<<endl;
					cout<<"\t\tPeshawar to Lahore   \t 	:\t Fare\t 1500 "<<endl;
					cout<<"\t\tPeshawar to Multan   \t  	:\t Fare\t 1800 "<<endl;
					cout<<"\t\tPeshawar to Sukkur   \t  	:\t Fare\t 2000 "<<endl;
					cout<<"\t\tAttock 	to Karachi  \t   	:\t Fare\t 2200 "<<endl;
					cout<<"\t\tAttock 	to sukkur   \t 	:\t Fare\t 1700 "<<endl;
					cout<<"\t\tAttock 	to Multan   \t 	:\t Fare\t 1500 "<<endl;
					cout<<"\t\tAttock 	to khanewal \t\t:\t Fare\t 1600 "<<endl;										
					break;
				}
			
			case 2:
				{
					if(seatsfull())
					{	
						cout<<"\n\n\t\t...........SORRY SEATS ARE BOOKED..........\n\n"<<endl;
					}	
					else
					{
					system("cls");
					Sleep(1000);
					long long int cnic,num;
					int seat,x,t_icket;
					design();
					cout<<"\t\tENTER ONLY THOSE STATION WHICH ARE AVAILABLE ON MAIN MENU:\n";
					design();
					string name,starting,ending;
					design();
					cout<<"\t\tYour Ticket Number: "<<z<<endl;
					design();
					cout<<"\t\tChoose your seat class...... "<<endl;
					seat=classs ();
					cout<<"\n\t\tEnter Your Name : ";
					cin>>name;
					cout<<"\n\t\tEnter Your CNIC: ";
					cin>>cnic;
					cout<<"\n\t\tEnter Your Starting Station : ";
					cin>>starting;
					cout<<"\n\t\tEnter Your Ending Station: ";
					cin>>ending;
					amount=fare(starting,ending);
					increase(seat);
					cout<<"\n\t\tEnter Your Mobile Number : ";
					cin>>num;
					newticket(name,starting,ending,seat,cnic,num);
					cout<<"\n\t\tPress 1 to Print Your Ticket....... ";
					cin>>t_icket;
					system("cls");
					printticket();
					break;
					}
				}
				case 3:
				{
					SetConsoleTextAttribute(h,12);
					string name;
					cout<<"\n\t\t enter the name you want to search for ";
					cin>>name;
					searchbyName(name);
					break;
				}
				case 4:
				{
					long long int cnic;
					cout<<"\t\tEnter cnic to search ticket  ";
					cin>>cnic;
					searchbycnic(cnic);
					break;
				}
				case 5:	
				{
					long long int num;
					cout<<"\t\tEnter Number to search ticket : ";
					cin>>num;
					searchbynum(num);
					break;
				}	
				default:
				{
					cout<<"\t\t******************Invalid Input******************";
					break;
				}	
		
		}
	cout<<"\nPress Y to Continue or n to end the program...... ";
	cin>>choice;
	system("cls");
	}while (choice !='n');
	design();
	cout<<"\n\t\tThanks For Using For Our Program \n\n";
	design();
	return 0 ;
}

