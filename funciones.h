#ifndef _FUNCIONES_H
#define _FUNCIONES_H

/*
 * Funcion existFile
 * funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
int existsFile(char* filename);
/*
 * Funcion existFile
 * funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
int isIn(char string[],char caracter);
/*
 * Funcion existFile
 * funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
int consecutivos(char* string);
/*
 * Funcion existFile
 * funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
int esNumero(char c);
/*
 * Funcion existFile
 * funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
int esVocal(char c);
/*
 * Funcion existFile
 * funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
int verificarPalabraValida(char* palabra);
/*
 * Funcion existFile
 * funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
void buscarCaracteres(char* caracteres, char* nombreFile);
/*
 * Funcion existFile
 * funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
void generarCombinaciones(char* caracteres);
/*
 * Funcion existFile
 * funcion que verifica si un archivo de texto plano existe
 * @param char* filename, nombre del archivo
 * @return entero 1 en caso de que si exista y 0 en caso contrario
*/
void validarCombinaciones();

#endif