#include "mylib.h"

int main()
{
	cantidad_t configuracion;
	configuracion = f_inicio();
	
	estados_t estado;
	estado = espera;
    
    while(1){
      switch (estado) {
        case espera: estado = f_espera(config);
                     break;
        case carga: estado = f_carga(config);
                       break;
      }
    }
	
	return 0; 
}

