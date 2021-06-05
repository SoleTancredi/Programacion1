/*
EJERCICIO:
 Program que le pida al usuario un numero, despues que pida una operacion (+ - / *)
 y despues que pida otro numero. Segun la operacion ingresada, se llamarà a una funciòn
 que ejecute la operacion (sumar-restar-multiplicar-dividir) Y luego mostrar al usuario el resultado.
 El mostrar resultado NOOOO puede estar dentro de las funciones que crean para hacer la operacion.
 En la funcion dividr, validad no dividir por cero.
 */

#include <stdio.h>
#include <stdlib.h>

int function_add(int num1, int num2);
int function_subtraction(int num1, int num2);
int function_multiplication(int num1, int num2);
int function_division(int num1, int num2, float* cajita_de_direcciones);

int main(void) {

	int num1;
	int num2;
	int answer;
	int answer_operation;
	int follow;
	int returnisDivision;
	float resultadoDivision;

	do
	{
	printf("Welcome! Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	printf("Perfect! Choose your option below:\n A) Sum '1'\n B) Subtraction '2'\n C) Multiplication '3'\n D) Division '4'");
	scanf("%d",&answer);

	switch(answer)
	{
	case 1:
		answer_operation = function_add (num1, num2);
		printf("Perfect! The result of sum is: %d\n",answer_operation);
		break;
	case 2:
		answer_operation = function_subtraction (num1, num2);
		printf("Perfect! The result of subtraction is: %d\n", answer_operation);
		break;
	case 3:
		answer_operation = function_multiplication (num1, num2);
		printf("Perfect! The result of multiplication is: %d\n", answer_operation);
		break;

	case 4:

		returnisDivision = function_division (num1, num2, &resultadoDivision);
		if(returnisDivision == 1)
		{
			printf("Error! Ingrese un divisor mayor y distinto a 0");
		}
		else
		{
			printf("Perfect! The result of division is: %f\n",resultadoDivision);
		}
		break;
	}

	printf("WANT YOU CONTINUE OPERATIONS? IN CASE AFFIRMATIVE ENTER '1'\n");
	scanf("%d",&follow);

	}while(follow == 1);

	return EXIT_SUCCESS;
}

int function_add(int num1, int num2)
{
	int add;
	add = num1 + num2;

	return add;
}
int function_subtraction(int num1, int num2)
{
	int subtraction;
	subtraction = num1 - num2;

	return subtraction;
}
int function_multiplication(int num1, int num2)
{
	int multiplication;
	multiplication = num1 * num2;

	return multiplication;
}
/* Retorna 1 en caso de que la funcion no halla corrido correctamente o retorna 0 en caso de exito!
 * Es una validacion de la funcion!
 * */
int function_division(int num1, int num2,float* cajita_de_direcciones)
{
	int returnis;
	float division;

	if(num2 == 0 || num2 < 0)
	{
		returnis = 1;
	}
	else
	{
		division = (float)num1 / num2;
		*cajita_de_direcciones = division;

		returnis = 0;
	}

	return returnis;
}
