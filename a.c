/*
Data:
23:59 2018/12/23
By:
Cvdqqj

Software:
Dev-Cpp 5.11 TDM-GCC x64 4.9.2 Portable
//It is portable C develope IDE ,It could just download unzip and just running ,which mean it is a portable software.
//Env: Windows10 X64 
//Disk Space :340MB+

Software Download:
https://sourceforge.net/projects/orwelldevcpp/

*/

#include"stdio.h"
#include"stdlib.h"

void print_num(int i)
{
	int a=0;
	for(a=0;a<i;a++)
	{
		printf("%d\n",a);
	}
}

void new_line(int x)
{
	int i;
	for(i=0;i<x;i++)
		//printf("\n");
		printf("%c",'\n');
}

void helloworld(int i)
{
	while(i>0)
	{
		printf("Hello world\n");
		i--;
	}		
}

int input_int(void)
{
	int x=0;
	scanf("Input a number:\t",x);
	return x;
}

void switch_fun(int x)
{
	switch(x)
	{
		case 0:printf("0 Hello world\n");break;
		case 1:printf("1 Hello world\n");break;
		default:printf("Hello world\n");break;
	}
 } 

int main(void)
{
	int x;
	print_num(10);
	new_line(3);
	helloworld(3);	
	
	//x=input_int();
	scanf("Input a number:\t%d",x);
	
	switch_fun(x);
	
	//printf("\n\n%d\n\n",x);
	
//	printf("Hello world\n");
	return 0;
}

