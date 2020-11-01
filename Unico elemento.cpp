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
