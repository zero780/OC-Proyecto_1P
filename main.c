#include <stdio.h>
#include <stdlib.h>

//FUNCIONES DE TEMPERATURA
int celsiusToFahrenheit(int valor){
	int tmp = valor * 9;
	tmp = tmp / 5;
	tmp = tmp + 32;
	return tmp;//(9/5)*(valor)+32
	
}
int fahrenheitToCelsius(int valor){
	int tmp = valor - 32;
	tmp = tmp * 5;
	tmp = tmp / 9;
	return tmp;
	
}
int celsiusToKelvin(int valor){
	
	return valor + 273;
	
}
int kelvinToCelsius(int valor){
	
	return valor - 273;
}
int kelvinToFahrenheit(int valor){
	int tmp = valor - 273;
	tmp = tmp * 9;
	tmp = tmp / 5;
	tmp = tmp + 32;
	return tmp;//(9/5)*(valor-273.15)+32
}
int fahrenheitToKelvin(int valor){
	int tmp = valor - 32;
	tmp = tmp * 5;
	tmp = tmp / 9;
	tmp = tmp + 273;
	
	return tmp;	//(5/9)*(valor-32)+273.15	
}

/*
FUNCIONES DE DISTANCIA
*/
int kilometerToMile(int valor){
	
	return valor / 1.609;
}

int meterToYard(int valor){
	
	return valor * 1.094;
}

int meterToFeet(int valor){
	
	return valor * 3.281;
}


int main(int argc, char *argv[]) {
	int op = 0;
	int valor = 0;
	printf("Opciones:\n1.Celsius a fahrenheit\n2.Fahrenheit a celsius\n3.Celsius a kelvin\n4.Kelvin a celsius\n5.Kelvin a fahrenheit\n6.Fahrenheit a kelvin\n");
	
	scanf("%i",&op);
	
//OPCIONES PARA FUNCIONES DE TEMPERATURA	
	if (op==1){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\ncelsiusToFahrenheit: %i\n",celsiusToFahrenheit(valor));
		
	}else if(op==2){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nfahrenheitToCelsius: %i\n",fahrenheitToCelsius(valor));
		
	}else if(op==3){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\ncelsiusToKelvin: %i\n",celsiusToKelvin(valor));
		
	}else if(op==4){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nkelvinToCelsius: %i\n",kelvinToCelsius(valor));
		
	}else if(op==5){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nkelvinToFahrenheit: %i\n",kelvinToFahrenheit(valor));
		
	}else if(op==6){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nfahrenheitToKelvin: %i\n",fahrenheitToKelvin(valor));

//OPCIONES PARA FUNCIONES DE DISTANCIA
	}else if(op==7){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nkilometerToMile: %i\n",kilometerToMile(valor));

	}else if(op==8){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nmeterToYard: %i\n",meterToYard(valor));

	}else if(op==9){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nmeterToFeet: %i\n",meterToFeet(valor));

	}else{
		printf("\nOpcion Invalida!: Reinicie el programa\n");
		return 0;
	}
	
	return 0;
}
