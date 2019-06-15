#include <stdio.h>
#include <stdlib.h>


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
	printf("Opciones:\n1.Celsius a fahrenheit\n2.Fahrenheit a celsius\n
		3.Celsius a kelvin\n4.Kelvin a celsius\n5.Kelvin a fahrenheit\n
		6.Fahrenheit a kelvin\n");
	
	scanf("%i",&op);
	
	
	if (op==1){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\ncelsiusToFahrenheit: %i",celsiusToFahrenheit(valor));
		
	}else if(op==2){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nfahrenheitToCelsius: %i",fahrenheitToCelsius(valor));
		
	}else if(op==3){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\ncelsiusToKelvin: %i",celsiusToKelvin(valor));
		
	}else if(op==4){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nkelvinToCelsius: %i",kelvinToCelsius(valor));
		
	}else if(op==5){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nkelvinToFahrenheit: %i",kelvinToFahrenheit(valor));
		
	}else if(op==6){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nfahrenheitToKelvin: %i",fahrenheitToKelvin(valor));
//OPCIONES PARA FUNCIONES DE DISTANCIA
	}else if(op==7){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nkilometerToMile: %i",kilometerToMile(valor));

	}else if(op==8){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nmeterToYard: %i",meterToYard(valor));

	}else if(op==9){
		printf("Ingrese valor:");
		scanf("%i",&valor);
		printf("\nmeterToFeet: %i",meterToFeet(valor));

	}else{
		printf("\nOpcion Invalida!: Reinicie el programa");
		return 0;
	}
	
	return 0;
}
