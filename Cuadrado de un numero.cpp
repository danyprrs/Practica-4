#include<stdio.h> 
int main(){
	// Indicar el número N abajo.
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
