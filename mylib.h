#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef MI_LIBRERIA
#define MI_LIBRERIA
 
typedef enum 
	{espera=0,
	 carga=1
	 
	}estados_t;

typedef struct 
	{
 	 	char Cant_Emb;  // cantidad para embalar
 		char Sens;      // cantidad actual
	}cantidad_t;


cantidad_t f_seteo(char*);
cantidad_t f_inicio(void); 

estados_t f_espera(cantidad_t*);
estados_t f_carga(cantidad_t*);
estados_t estado;

#endif

