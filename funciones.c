
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "funciones.h"

/*
 * Funcion existsFile
*/
int existsFile(char* filename) {
	FILE* f = NULL;
	f = fopen(filename,"r");
	if (f == NULL) 
		return 0;
	else {
		fclose(f);
		return 1;
	}
	return 0;
}

/*
 * Funcion isIn
*/
int isIn(char string[],char caracter){
	int i=0;
	for (i=0;i<strlen(string);i++){
		if (string[i]==caracter){
			return 1;
		}
	}
	return 0;
}

/*
 * Funcion consecutivos
*/
int consecutivos(char* string){
	int i;
	for (i = 0; i < strlen(string)-2; ++i)
	{
		if (string[i]==string[i+1] && string[i+1]==string[i+2]){
			return 1;
		}
	}
	return 0;
}

/*
 * Funcion esNumero
*/
int esNumero(char c){
	if (c== '0' || c== '1' || c== '2' || c== '3' || c== '4' || c== '5' || c== '6' || c== '7' || c== '8' || c== '9' ){
		return 1;
	}
	return 0;
}

/*
 * Funcion esVocal
*/
int esVocal(char c){
	if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
		return 1;
	}
	return 0;
}

/*
 * Funcion verificarPalabraValida
*/
int verificarPalabraValida(char* palabra){
	if(consecutivos(palabra)){
		return 0;
	}
	if(esNumero(palabra[0]) && esNumero(palabra[strlen(palabra)])){
		return 0;
	}
	if (esVocal(palabra[0])){
		return 0;
	}
	return 1;
}

/*
 * Funcion buscarCaracteres
*/
void buscarCaracteres(char* caracteres, char* nombreFile){
	
	
    FILE* archivoEntrada;
	archivoEntrada = fopen(nombreFile,"r");

	//char cadena[LARGOLINE];
	char buffer;
	int contador=0;
	while (!feof(archivoEntrada)){

		fscanf(archivoEntrada,"%c\n",&buffer);

		if(!isIn(caracteres,buffer)){
			caracteres[contador]=buffer;
			contador++;	
		}
	}
	fclose(archivoEntrada);    
}

/*
 * Funcion generarCombinaciones
*/
void generarCombinaciones(char* caracteres){
    
    FILE* archivoSalida;
	archivoSalida = fopen("salida.txt","w");
	int cantidad = strlen(caracteres);
    char string[] = { '0', '0', '0', '0', '0','0', '0', '0','\n', '\0' };
    int i,j,k,l,m,o,p,q;
    for (i=0;i<cantidad;i++){
		for (j=0;j<cantidad;j++){
    		for (k=0;k<cantidad;k++){
    			for (l=0;l<cantidad;l++){
    				for (m=0;m<cantidad;m++){
    					for (o=0;o<cantidad;o++){
    						for (p=0;p<cantidad;p++){
    							for (q=0;q<cantidad;q++){
    								
    								string[0]=caracteres[i];
    								string[1]=caracteres[j];
    								string[2]=caracteres[k];
    								string[3]=caracteres[l];
    								string[4]=caracteres[m];
    								string[5]=caracteres[o];
    								string[6]=caracteres[p];
    								string[7]=caracteres[q];
    								
    								if (verificarPalabraValida(string)){
										fputs(string,archivoSalida);
									}
    								
								}
							}
						}
					}	
				}	
			}	
		}
	}
	fclose(archivoSalida);   
}