#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char cadena[40];
int i=0;

void mal(void)
{
	printf("\n %s no es parte de L(G)\n",cadena);
}

void consumir(char letra)
{
	if (cadena[i]==letra)
	{
		i++;
	}
	else
	{
		mal();
		exit(1);
	}
}

void C();

void B();

void A(void)
{
	switch (cadena[i])
	{
		case 'a':
			consumir('a');
			B();
			consumir('a');
			C();
			break;
		case 'b':
			consumir('b');
			C();
			break;
		default: 
			mal();
			exit(1);
			
	}
}

void B(void)
{
	switch (cadena[i])
	{
		case 'b':
			consumir('b');
			A();
			C();
			break;
		case 'a':
			consumir('a');
			break;
		default: 
			mal();
			exit(1);
			
	}
}

void C(void)
{
	switch (cadena[i])
	{
		case 'a':
			consumir('a');
			A();
			B();
			break;
		case 'c':
			consumir('c');
			break;
		default: 
			mal();
			exit(1);
			
	}
}


int main (void)
{
	fflush(stdin);
	gets(cadena);
	printf("\n%s",cadena);
	A();
	if (cadena[i]=='\0')
	{
		printf("\n %s si es parte de L(G)\n",cadena);
	}
	else
	{
		mal();
	}
	return 0;
}
