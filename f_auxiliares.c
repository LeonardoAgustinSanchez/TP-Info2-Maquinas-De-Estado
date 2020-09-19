#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"

char *getKey(char *key)
{
char i = 0;
while(*(key+i) != ' ')
	{
		i++;
	}
*(key+i) = 0;

return key+i+1;
}

int second()
{

FILE *conf;
char cadena[40], *key, *val;
char variables[3][20] = {"cantEmb", "sens"},i;
char cantEmb, sens;

if( (conf = fopen("config.conf","rb")) == NULL ) //SI NO EXITE ARCHIVO DE CONFIG
{
	printf("No se encontro archivo de configuracion.\n"); 
	return 1;
}

fgets(cadena, 40, conf);

do
{
	key = cadena;
	if( (*key) != '#' && strlen(key) >= 0)
	{		//caracter que indica comentario
		val = getKey(key); 						//modifica a key para que solo tenga la clave, retorna.
		//printf("%s: %s\n", key, val);			//imprime la clave y el valor levantdo del archvio
		
		for( i = 0; i < 2; i++)
		{
			if( !strcmp( key , variables[i] ) )
			{
				
				switch(i)
				{
					case 0: cantEmb = atoi(val); //transformó una cadena de caract en un N°entero
						break;
					case 1:	sens = atoi(val);
						break;
				}
			}
		}
	}
fgets(cadena, 40, conf);	

}
while( !feof(conf) );

printf("# Cant Necesaria Para Embalar: %d  ",cantEmb);
printf("\n# Cant Inicial En Cinta: %d ",sens);

	//fclose (archivo);
	//return configuracion;
}
