#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

typedef enum
{
  carga = 0,
  embalaje = 1
}estados_t;

typedef struct inicio{
  char t_cant_emb;
  char t_inicial;     
}cinta_t;

temperatura_t f_inicio(void); // lee el archivo de configuración y carga las variables.
estados_t f_espera(temperatura_t);
estados_t f_calentar(temperatura_t);



#endif
