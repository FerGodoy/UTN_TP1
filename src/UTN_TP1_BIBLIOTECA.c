
#include "UTN_TP1_BIBLIOTECA.h"

float ingresarKilometros(){
	float kilometros = 0;
	printf("Ingrese los kilometros: \n ");

	scanf("%f", &kilometros);
	printf("Los kilometros ingresados son: %.2f \n \n" , kilometros);

	return kilometros;

}

float ingresarPrecioVueloAerolineas(){
	float precioAerolineas = 0;

	printf("Ingrese el precio de Aerolineas \n ");

	scanf("%f", &precioAerolineas);
	printf("El Precio de Aerolineas es: %.3f \n ", precioAerolineas);

	return precioAerolineas;

}

float ingresarPrecioVueloLatam(){
	float precioLatam = 0;

	printf("Ingrese el precio de Latam \n ");

	scanf("%f", &precioLatam);
	printf("El Precio de Latam es: %.3f \n ", precioLatam);

	return precioLatam;

}

float calcularTarjetaDebito(float precio){
	float precioConDescuento = 0;

	precioConDescuento = precio - precio * 0.1;

	return precioConDescuento;
}

float calcularTarjetaCredito(float precio){
	float precioConInteres = 0;

	precioConInteres = precio + precio *0.25;

	return precioConInteres;

}

float convertirPesosABitcoin(float precioEnPesos){
	float bitcoin = 4606954.55;
	float precioEnBitcoin = 0;

	precioEnBitcoin = precioEnPesos / bitcoin;

	return precioEnBitcoin;

}

float precioPorKm(float precio, float kilometros){
	float precioUnitario = 0;

	precioUnitario = precio / kilometros;

	return precioUnitario;

}

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
	float diferenciaDePrecio){

	printf("Informar Resultados \n\n ");

	printf("Los Kilometros ingresados es: %.2fKm \n\n ", kilometros);

	printf("Aerolinas Argentinas \n\n ");
	printf("a) Precio de Aerolineas: %.2f \n ", precioAerolineas);
	printf("b) Precio con tarjeta de debito: %.2f \n ", precioDebitoAerolineas);
	printf("c) Precio con tarjeta de credito: %.2f \n ", precioCreditoAerolinea);
	printf("d) Precio pagado con Bitcoin: %.4f \n ", precioConBitcoinEnAerolinea);
	printf("e) Precio Unitario: %.2f \n\n ", precioPorKmAerolineas);


	printf("Latam \n\n ");
	printf("a) Precio de Latam: %.2f \n ",precioLatam);
	printf("b) Precio con tarjeta de debito: %.2f \n ", precioDebitoLatam);
	printf("c) Precio con tarjeta de credito: %.2f \n ", precioCreditoLatam);
	printf("d) Precio pagado con Bitcoin: %.4f \n ", precioConBitcoinEnLatam);
	printf("e) Precio Unitario: %.2f \n\n ", precioPorKmLatam);

	printf("La diferencia de precio es: %.2f \n\n ", diferenciaDePrecio);

}

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
		float* precioPorKmLatam){

	*precioDebitoAerolineas = calcularTarjetaDebito(precioAerolineas);
	*precioDebitoLatam = calcularTarjetaDebito(precioLatam);

	*precioCreditoAerolinea = calcularTarjetaCredito(precioAerolineas);
	*precioCreditoLatam = calcularTarjetaCredito(precioLatam);

	*precioConBitcoinEnAerolinea = convertirPesosABitcoin(precioAerolineas);
	*precioConBitcoinEnLatam = convertirPesosABitcoin(precioLatam);

	*precioPorKmAerolineas = precioPorKm (precioAerolineas, kilometros);
	*precioPorKmLatam = precioPorKm (precioLatam, kilometros);

	*diferenciaDePrecio = precioAerolineas - precioLatam;
}

