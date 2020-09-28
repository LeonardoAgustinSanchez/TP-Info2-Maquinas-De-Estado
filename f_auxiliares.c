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

cantidad_t f_seteo(char* "config.conf")
{

FILE *conf;
char cadena[40], *key, *val;
char variables[3][20] = {"Cant_Emb", "sens"},i;

cantidad_t configuracion;
configuracion.Cant_Emb = 0;
configuracion.sens = 0;

if( (conf = fopen("config.conf","rb")) == NULL ) 
{
	printf("No se encontro archivo de configuracion.\n"); 
	return 1; 
}
else
{
fgets(cadena, 40, conf);
	do
	{
	key = cadena;
	if( (*key) != '#' && strlen(key) >= 0)
		{		
		val = getKey(key); 			//modifica a key para que solo tenga la clave, retorna.
//printf("%s: %s\n", key, val);		//imprime la clave y el valor levantdo del archvio
			for( i = 0; i < 2; i++)
			{
				if( !strcmp( key , variables[i] ) )
				{
				
					switch(i)
					{
					case 0: cantidad.Cant_Emb = atoi(val); //transformó una cadena de caract en un N°entero
						break;
					case 1:	cantidad.Sens = atoi(val);
						break;
					}
				}
			}
		}
	fgets(cadena, 40, conf);	

	}
	while( !feof(conf) );
}
	printf("# Cant Necesaria Para Embalar: %d  ",cantidad.Cant_Emb);
	printf("\n# Cant Inicial En Cinta: %d ",cantidad.Sens);
	printf("\n-----\n")
	if(cantidad.Sens < cantidad.Cant_Emb){
		printf("Cuando Arranque la cinta se podran seguir pasando productos\n");
	}
	else{
		printf("Cuando Arranque la cinta los productos se tendran que embalar\n");
	}
	
	fclose (archivo);
	return configuracion;
}
