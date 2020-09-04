#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MY_LIB

char *getKey(char *key){
char i = 0;

while(*(key+i) != ' ')
	{
		i++;
	}
*(key+i) = 0;

return key+i+1;
}

int second(){
FILE *conf;
char cadena[40], *key, *val;
char variables[3][20] = {"cantEmb", "cantInicial"},i;
char cantEmb, cantInicial;

if( (conf = fopen("config.conf","rb")) == NULL ){
	printf("No se encontro archivo de configuracion.\n"); //SI NO EXITE ARCHIVO DE CONFIG
	return 1;
}

fgets(cadena, 40, conf);

do{
	key = cadena;
	if( (*key) != '#' && strlen(key) >= 0){		//caracter que indica comentario
		val = getKey(key); 						//modifica a key para que solo tenga la clave, retorna.
		//printf("%s: %s\n", key, val);			//imprime la clave y el valor levantdo del archvio
		
		for( i = 0; i < 2; i++){
			if( !strcmp( key , variables[i] ) ){
				
				switch(i){
					case 0: cantEmb = atoi(val); //transformó una cadena de caract en un N°entero
						break;
					case 1:	cantInicial = atoi(val);
						break;
				}
			}
		}
	}
	
	fgets(cadena, 40, conf);	
}while( !feof(conf) );

printf("PRECONFIGURACIONES:");
printf("\n# Cant Necesaria Para Embalar: %d  ",cantEmb);
printf("\n# Cant Inicial En Cinta: %d ",cantInicial);

return cantEmb,cantInicial;

}

