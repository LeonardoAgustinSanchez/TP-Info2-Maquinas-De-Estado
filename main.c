#include "mylib.h"

int main()
{
	cantidad_t configuracion;
	configuracion = f_inicio();
	
	estados_t estado;
	estado = espera;
    
	estados_t (*contador[])(cantidad_t*) = {f_espera,f_carga};
	while(1) estado = (*contador[estado])(&configuracion);
	
	return 0; 
}

