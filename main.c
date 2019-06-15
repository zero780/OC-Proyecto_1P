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
	char *op;
	int valor = 0;
	char entrada[100];
	printf("\n--CONVERSOR DE UNIDADES--\nOpciones:\n1.Celsius a Fahrenheit\n2.Fahrenheit a Celsius\n3.Celsius a Kelvin\n4.Kelvin a Celsius\n5.Kelvin a Fahrenheit\n6.Fahrenheit a Kelvin\n7.Kilometros a Millas\n8.Metros a Yardas\n9.Metros a Pies\n10.Salir\n");
	fgets(entrada,100, stdin);
	//scanf("%i",&op);

	while(op!="10"){
		//OPCIONES PARA FUNCIONES DE TEMPERATURA	
		if (op=="1"){
			printf("Ingrese valor:");
			scanf("%i",&valor);
			printf("\n\tcelsiusToFahrenheit: %i\n",celsiusToFahrenheit(valor));
			
		}else if(op=="2"){
			printf("Ingrese valor:");
			scanf("%i",&valor);
			printf("\n\tfahrenheitToCelsius: %i\n",fahrenheitToCelsius(valor));
			
		}else if(op=="3"){
			printf("Ingrese valor:");
			scanf("%i",&valor);
			printf("\n\tcelsiusToKelvin: %i\n",celsiusToKelvin(valor));
			
		}else if(op=="4"){
			printf("Ingrese valor:");
			scanf("%i",&valor);
			printf("\n\tkelvinToCelsius: %i\n",kelvinToCelsius(valor));
			
		}else if(op=="5"){
			printf("Ingrese valor:");
			scanf("%i",&valor);
			printf("\n\tkelvinToFahrenheit: %i\n",kelvinToFahrenheit(valor));
			
		}else if(op=="6"){
			printf("Ingrese valor:");
			scanf("%i",&valor);
			printf("\n\tfahrenheitToKelvin: %i\n",fahrenheitToKelvin(valor));

		//OPCIONES PARA FUNCIONES DE DISTANCIA
		}else if(op=="7"){
			printf("Ingrese valor:");
			scanf("%i",&valor);
			printf("\n\tkilometerToMile: %i\n",kilometerToMile(valor));

		}else if(op=="8"){
			printf("Ingrese valor:");
			scanf("%i",&valor);
			printf("\n\tmeterToYard: %i\n",meterToYard(valor));

		}else if(op=="9"){
			printf("Ingrese valor:");
			scanf("%i",&valor);
			printf("\n\tmeterToFeet: %i\n",meterToFeet(valor));

		}else if(op!="10"){
			printf("\n\tOpcion Invalida!: Reinicie el programa\n");
			return 0;
		}

		printf("\n--CONVERSOR DE UNIDADES--\nOpciones:\n1.Celsius a Fahrenheit\n2.Fahrenheit a Celsius\n3.Celsius a Kelvin\n4.Kelvin a Celsius\n5.Kelvin a Fahrenheit\n6.Fahrenheit a Kelvin\n7.Kilometros a Millas\n8.Metros a Yardas\n9.Metros a Pies\n10.Salir\n");
		fgets(entrada,100, stdin);
		//scanf("%i",&op);

	}
	
	
	return 0;
}
