#include "mylib.h"

printf("Bienvenido a la maquina de estado");

void pros1(void){
printf("-Cinta en estado de carga:\n");}
void pros3(void){
printf("   Se estan embalando los productos anteriores...");}


int ingresoDatos(void){
	int ingreso;
	scanf("%d",&ingreso);
	return ingreso;
}

cantidad_t prefuncion(cantidad_t *cantidad,int cantidades)



estados_t f_carga(cantidad_t *cantidad,int dato)
{
	if(dato < cantidad->CantEmb){
	pros1();
	return carga;
	}
	pros3();
	return espera;}

estados_t f_espera(cantidad_t *cantidad)
{
	if(cantidad->sens == cantidad->CantEmb){
	pros3();
	return espera;
	}
	pros1();
	return carga;
}

cantidad_t inicio (void){
	cantidad_t configuracionInicial;
	configuracionInicial = f_seteo ("config.conf");
	return configuracionInicial;
	}


