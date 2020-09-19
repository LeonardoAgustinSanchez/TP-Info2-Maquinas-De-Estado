#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef MI_LIBRERIA
#define MI_LIBRERIA
 
typedef enum {espera=0,carga=1}estados_t;

typedef struct 
	{
 	 	char Cant_Emb;         // cantidad actual
 		char Sens;     // cantidad seteada 
	}cantidad_t;

//cantidad_t f_inicio(void); // lee el archivo de configuración y carga las variables.
//estados_t f_espera(cantidad_t);
//estados_t f_carga(cantidad_t);

int f8=54;

#endif

