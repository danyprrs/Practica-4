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
