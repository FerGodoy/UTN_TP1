
#include <stdio.h>
#include <stdlib.h>
#ifndef UTN_TP1_BIBLIOTECA_H_
#define UTN_TP1_BIBLIOTECA_H_


float ingresarKilometros();
float ingresarPrecioVueloAerolineas();
float ingresarPrecioVueloLatam();
float calcularTarjetaDebito(float precio);
float calcularTarjetaCredito(float precio);
float convertirPesosABitcoin(float precio);
float precioPorKm(float precio, float kilometros);
void calcularCosto(float precioAerolineas,
	float precioLatam,
	float kilometros,
	float* diferenciaDePrecio,
	float* precioDebitoAerolineas,
	float* precioDebitoLatam ,
	float* precioCreditoAerolinea,
	float* precioCreditoLatam,
	float* precioConBitcoinEnAerolinea,
	float* precioConBitcoinEnLatam,
	float* precioPorKmAerolineas,
	float* precioPorKmLatam);

void informarResultados(float kilometros,
	float precioAerolineas,
	float precioDebitoAerolineas,
	float precioCreditoAerolinea,
	float precioConBitcoinEnAerolinea,
	float precioPorKmAerolineas,
	float precioLatam,
	float precioDebitoLatam,
	float precioCreditoLatam,
	float precioConBitcoinEnLatam,
	float precioPorKmLatam,
	float diferenciaDePrecio);


#endif /* UTN_TP1_BIBLIOTECA_H_ */
