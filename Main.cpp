//Vanessa Bedolla
//Project 2
//CSE 310
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Util.h"

using namespace std;

int nextCommand(int *a,int *b,int *c,int *d);
Heap H;

int main()//main function calls the nextcomman function
{
	char c;//command
	int i,v,k,n;
	int m;
	ifstream file1;

		while(1)
		{
			c=nextCommand(&i,&v,&k,&n);

			switch(c)
			{
				case 's':
				case 'S':
					cout<<"COMMAND: "<<c<<endl;//ends the program
					exit(0);
				case 'r':
				case 'R':
					{
					cout<<"COMMAND: "<<c<<endl;
					file1.open("HEAPinput.txt");
					

					if(file1.is_open())
					{
						Element *array=new Element[];
						int index=0;
						while(file1)
						{
						string Line;
						int num;

						getline(file1,Line);
						istringstream nS(Line);

						nS>>num;//get that one integer on the line
						
						//array[index]->key=num;
						}

					}
					else
						cout<<"Could not open HEAPinput.txt"<<endl;

					break;
					}
				case 'd':
				case 'D':
					cout<<"COMMAND: "<<c<<endl;
					break;
				case 'w':
				case 'W':
					cout<<"COMMAND: "<<c<<endl;
					break;
				case 'i':
				case 'I':
					cout<<"COMMAND: "<<c<<endl;
					break;
				case 'k':
				case 'K':
					cout<<"COMMAND: "<<c<<endl;
					break;
				case 'c':
				case 'C'://cannot skip initialization without brackets
					{
					cout<<"COMMAND: "<<c<<endl;
					H=initialize(n);
					break;
					}
				default:
					break;

			}
		}
}

int nextCommand(int *i,int *v, int *k, int *n)//parser for keyboard input, returns command
{
	char c;
	
	while(1)
	{
		cin>>c;

		if(c==' '||c=='\t'||c=='\n')
		{
			
			continue;
		}

		if(c=='S'||c== 'R'||c=='s'||c=='r')
		{
			break;
		}

		if(c=='W'||c== 'D'||c=='w'||c=='d')
		{
			break;
		}

		if (c=='K'||c=='k')
		{

			scanf("%d",i);
			scanf("%d",v);
			break;
		}

		if(c=='I'||c=='i')
		{
			scanf("%d",k);
			break;
		}

		if (c=='C'||c=='c')
		{
			scanf("%d", n);
			break;
		}
		cout<<"invalid Command"<<endl;
	}
	return c;

}