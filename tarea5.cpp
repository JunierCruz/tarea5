#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int claveOK();
int main()
	{
		
		if (claveOK()){
			printf("Palabra clave correcta");
			return(1);
		}
		
		else{
			printf("palabra clave invalida\n");
			return(0);
		}
		
	}
	int claveOK()
		{
		
		char s[30];
		int nIntentos=3;
		do{
			printf("Introduzca una palabra clave: ");
			gets(s);
			if (strcmp(s,"paso"))
				nIntentos--; //palabra clave no valida
			else
			   break; //palabra clave valida
	}while(nIntentos>0);
	return(nIntentos);
		}
		  
	
