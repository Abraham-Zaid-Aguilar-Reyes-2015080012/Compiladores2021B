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

void E();

void D();

void C();

void B();

void A(void)
{
	B();
	C();
	D();
	E();
	consumir('a');
}

void B(void)
{
	switch (cadena[i])
	{
		case 'b':
			consumir('b');
			C();
			D();
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
		case 'c':
			consumir('c');
			A();
			break;
		case 'f':
			consumir('f');
			break;
		default: 
			mal();
			exit(1);
			
	}
}

void D(void)
{
	consumir('d');
}

void E(void)
{
	consumir('e');
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
