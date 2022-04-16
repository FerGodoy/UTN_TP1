#include <stdio.h>
#include <stdlib.h>
#include "UTN_TP1_BIBLIOTECA.h"



int main(void) {
	setbuf(stdout, NULL);

	int opcionElegida;
	float kilometros = 0;
	float precioAerolineas = 0;
	float precioLatam = 0;
	float precioDebitoAerolineas = 0;
	float precioDebitoLatam = 0;
	float precioCreditoAerolinea = 0;
	float precioCreditoLatam = 0;
	float precioConBitcoinEnAerolinea = 0;
	float precioConBitcoinEnLatam = 0;
	float precioPorKmAerolineas = 0;
	float precioPorKmLatam = 0;
	float diferenciaDePrecio = 0;
	int flagCostoCalculado = 0;


	do {
		printf("1. Ingresar Kilometros: \n");
		printf("2. Ingresar Precio de Vuelos:(Aerolíneas, Latam) \n");
		printf("3. Calcular todos los costos: \n");
		printf("4. Informar Resultados \n");
		printf("5. Carga forzada de datos \n");
		printf("6. Salir \n");
		printf("Ingresa una opción: \n");

		scanf("%d", &opcionElegida);



		switch(opcionElegida){
			case 1:
				kilometros = ingresarKilometros();
				break;

			case 2:
				printf("A) Precio vuelo Aerolineas; \n\n ");
				precioAerolineas = ingresarPrecioVueloAerolineas();
				printf("B) Precio vuelo Latam \n\n ");
				precioLatam = ingresarPrecioVueloLatam();
				break;

			case 3:
				if(kilometros != 0 && precioAerolineas != 0 && precioLatam !=0){

				calcularCosto(precioAerolineas,
						precioLatam,
						kilometros,
						&diferenciaDePrecio,
						&precioDebitoAerolineas,
						&precioDebitoLatam ,
						&precioCreditoAerolinea,
						&precioCreditoLatam,
						&precioConBitcoinEnAerolinea,
						&precioConBitcoinEnLatam,
						&precioPorKmAerolineas,
						&precioPorKmLatam);

				flagCostoCalculado = 1;


				}else{
					printf("No ingresaste los datos requeridos \n\n");
				}
				break;

			case 4:
				if(flagCostoCalculado == 1){
				informarResultados(kilometros,
						precioAerolineas,
						precioDebitoAerolineas,
						precioCreditoAerolinea,
						precioConBitcoinEnAerolinea,
						precioPorKmAerolineas,
						precioLatam,
						precioDebitoLatam,
						precioCreditoLatam,
						precioConBitcoinEnLatam,
						precioPorKmLatam,
						diferenciaDePrecio);
				}else{
					printf("No hay resultado para informar \n\n");

				}
				break;

			case 5:
				printf("Carga forzada de datos \n ");
				kilometros = 7090;
				precioAerolineas = 162965;
				precioLatam = 159339;

				calcularCosto(precioAerolineas,
						precioLatam,
						kilometros,
						&diferenciaDePrecio,
						&precioDebitoAerolineas,
						&precioDebitoLatam ,
						&precioCreditoAerolinea,
						&precioCreditoLatam,
						&precioConBitcoinEnAerolinea,
						&precioConBitcoinEnLatam,
						&precioPorKmAerolineas,
						&precioPorKmLatam);

				informarResultados(kilometros,
						precioAerolineas,
						precioDebitoAerolineas,
						precioCreditoAerolinea,
						precioConBitcoinEnAerolinea,
						precioPorKmAerolineas,
						precioLatam,
						precioDebitoLatam,
						precioCreditoLatam,
						precioConBitcoinEnLatam,
						precioPorKmLatam,
						diferenciaDePrecio);
				break;

			case 6:
				printf("Salir \n\n");
				break;

			default:
				printf("No eleigiste una opción correcta \n ");
		}
	} while(opcionElegida != 6);

	return 0;
}














