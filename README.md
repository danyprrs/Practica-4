# Practica 4. Operaciones binarias en C 

## Objectivos

El estudiante se familiarizará con el manejo de operaciones binarias utilizando el lenguaje de programación C,
realizando una serie de problemas sencillos para su mejor comprensión.

## Instrucciones

En la siguiente práctica, se listarán distintos problemas que pueden ser resueltos con el lenguaje de programación C,
los cuales deben de ser resueltos o donde su función principal sea utilizando los operadores binarios o Bitwise, cada
uno tendrá el valor de 25% de la demostración.

### Encuentra el único elememto de un arreglo.
Dado un arreglo donde cada elemento ocurre tres veces, excepto uno que aparece una sola vez. Encuentra el elemento
único. El tiempo de complejidad es O(n) y O(1) de espacio extra. 

Examplo:
Input: arr[] = {10, 1, 10, 3, 10, 1, 1, 2, 3, 3}
Output: 2

#include <stdio.h>
int main()
{
	// Se declaran las variables de las entradas
    int arr1[] = {10, 1, 10, 3, 10, 1, 1, 2, 3, 3};
    int n;
    int ctr=0;
    int i, j, k;
		n = 10;

		
    printf("\n El elemento único del arreglo es: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            // Aumenta el contador cuando el valor buscado es duplicado
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf(" %d ",arr1[i]);
        }
    }
       printf("\n\n");
}

### Multiplicaciones y divisiones
Realice un programa donde reciba 2 números enteros sin signo y permita realizar la división o la multiplicación de los
mismos, usando solamente operadores binarios.

int main(){
	unsigned int a;
	unsigned int b;
	unsigned int result1;
	unsigned int result2;
	
	a = 20;
	b = 5;
	
	result1 = a >> 2; // Dividir por 4
	result2 = b << 2; // Multiplicar por 4
	
	printf("Resultado 1: %d \n", result1);
	printf("Resultado 2: %d \n", result2);
}

### Calcule el cuadrado de un número sin utilizar ningún operador numérico.

Dado un entero N, calcule el cuadrado de un numero sin utilizar \*, / o librerías de potencias.

Input: n = 5
Output: 25

Input: 7
Output: 49

Input: n = 12
Output: 144

#include<stdio.h> 
int main(){
	// Se declaran las entradas de N y se les da su valor.
	int N1 = 5;
	int N2 = 7;
	int N3 = 12;
	int i = N1;
	int j = N2;
	int k = N3;
	// Inicializar el valor en cero.
    int CuadradoN1 = 0;
    int ContadorN1;
    int CuadradoN2 = 0;
    int ContadorN2;
    int CuadradoN3 = 0;
    int ContadorN3;
    // En la siguiente parte, a todo bit que sea igual a 1 se le
    // irán sumando sus valores, haciendo este ciclo hasta que de como resultado el cuadrado
    // sus respectivos valores, esto se realiza para cada una de las entradas.
        while(i>0){
            if((i & 1) == 1){
                CuadradoN1 += N1 << ContadorN1;
            }
            i = i >> 1;
            ContadorN1++;
        }
        
		while(j>0){
            if((j & 1) == 1){
                CuadradoN2 += N2 << ContadorN2;
            }
            j = j >> 1;
            ContadorN2++;
        }
        
        while(k>0){
            if((k & 1) == 1){
                CuadradoN3 += N3 << ContadorN3;
            }
            k = k >> 1;
            ContadorN3++;
        }
        // Aquí se despliegan los valores obtenidos.
        printf("El cuadrado de 5 es %d; de 7 es %d; de 12 es %d.",CuadradoN1, CuadradoN2, CuadradoN3);
    }

### Generador de secuencias de Grey Code

Dado un numero N, genera los patrones de bits de 0 a 2^n-1, donde cada patrón sucessivo difiere en 1 bit.

Ejemplo:
El siguiente es para una secuencia de 2-bit (n = 2)
  00 01 11 10
3-bite (n = 3)
  000 001 011 010 110 111 101 100
4-bit (n = 4)
  0000 0001 0011 0010 0110 0111 0101 0100 1100 1101 1111 
  1110 1010 1011 1001 1000

#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <string.h>     
#include <stdlib.h>     

int *array, counter = 0;

void binary_conv(int a, int n){
    // En esta parte se generan los espacios que deberá tener el codigo de Grey,
    // los cuales dependen directamente del valor de entrada de n.
	
	static char b[9];
    b[0] = '\0';

    int c;
    for (c = 128; c > 0; c >>= 1)
    {
        strcat(b, ((a & c) == c) ? "1" : "0");
    }
    int i = 8 - n;
	while(i < 8){
    	printf("%c", b[i]);
    	i++;
    }
}

int grey_code(int n){
	// En esta parte se modifica el arreglo para que todos los
	//valores queden en formato binario.

	int j, i;
	array[counter++] = 0;
	array[counter++] = 1;
	for(i = 1; i < n; i++){
		j = counter - 1;
		while(j >= 0){
			array[counter++] = array[j--] | 1 << i;
		}
	}	
}

main(){
	int n, i;
	printf("\nEscribe el valor de n\n");
	scanf("%d",&n);
	array = (int*)malloc(pow(2,n)*sizeof(int));
	grey_code(n);
	// En esta parte se van acomodando en los valores
	// em los espacios que se generaron en la parte 1.
	for(i = 0; i < counter; i++){
		binary_conv(array[i], n);
		printf("\n");
	}
}

### Reporte
Para esta práctica, reporta un screeshot de la demostración de cada uno de los problemas, así como adjuntando el código
del problema principal, además de explicar la solución.

### File uploads
En el repositorio de la práctica de github se adjuntará el código fuente (archivos .c) de cada uno de los problemas.


### Demonstration
Se realizará un screenshoot de cada una de la resolución de cada uno de los problemas, además se grabará un video
explicando la solución y ejecutandola para validar su comprobación.

Enlace del video:
https://drive.google.com/file/d/1c1v1sXRyJgBHCSw5Eb-98slbmkEeo2Xr/view?usp=sharing

## Conclusion
Esta práctica me ayudó a comprender mejor la programación en C, al principio tuve muchos problemas porque me faltaba
incluir las librerías que se ponen al principio de ciertos programas, sin embargo se llegó satisfactoriamente a la
solució de todos.
