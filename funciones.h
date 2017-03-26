#ifndef _FUNCIONES_H
#define _FUNCIONES_H

/*
 * Funcion existFile
 * Funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
int existsFile(char* filename) ;


/*
 * Funcion inIn
 * Funcion que verifica si un caracter esta dentro de un string
 * @param char string[], char caracter, string refiere al string en el cual se buscara el caracter "caracter"
 * @return entero 1 en caso de que si se encuentre y 0 en caso contrario
*/
int isIn(char string[],char caracter);


/*
 * Funcion consecutivos
 * Funcion que verifica si en un string existen tres caracteres consecutivos iguales
 * @param char* string, hace mencion al string en el cual se llevara a cabo la verificacion
 * @return entero 1 en caso de que si exista tres caracteres consecutivos y 0 en caso contrario
*/
int consecutivos(char* string);


/*
 * Funcion esNumero
 * Funcion que verifica si en un caracter es numero
 * @param char c, "c" hace mencion al caracter el cual se analizara
 * @return entero 1 en caso de que sea numero el caracter y 0 en caso contrario
*/
int esNumero(char c);


/*
 * Funcion esVocal
 * Funcion que verifica si en un caracter es una vocal
 * @param char c, "c" hace mencion al caracter el cual se analizara
 * @return entero 1 en caso de que sea una vocal el caracter y 0 en caso contrario
*/
int esVocal(char c);


/*
 * Funcion verificarPalabraValida
 * Funcion que verifica si en un string es valido cumpliendo las siguientes condiciones:
 	1) No deben existir 3 caracteres iguales seguidos en la palabra
 	2) 
 	3)
 * @param char* palabra, "palabra" hace mencion al string el cual se analizara
 * @return entero 1 en caso de que sea un string valido y 0 en caso contrario
*/
int verificarPalabraValida(char* palabra);


/*
 * Funcion buscarCaracteres
 * Funcion que busca todos los caracteres dentro de un archivo con el formato "%c\n"
 * @param char* caracteres, "caracteres" hace mencion al string en el cual se iran guardando los caracteres encontrados
 * @return en esta funcion no se retorna un dato ya que se retorna a traves del paso por referencia.
*/
void buscarCaracteres(char* caracteres, char* nombreFile);

/*
 * Funcion generarCombinaciones
 * Funcion que genera todas la combinaciones de palabras de 8 caracteres utilizando los caracteres del string de entrada
 * @param char* caracteres, "caracteres" hace mencion los caracteres que se utilizaran para las combinaciones
 * @return , en esta funcion no se retorna nada ya que los datos de salida se entregan en un archivo de text llamado "salida.txt"
*/
void generarCombinaciones(char* caracteres);


#endif