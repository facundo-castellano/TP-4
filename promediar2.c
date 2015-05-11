/* ¿Informa la longitud promedio de las líneas?
* Facundo Castellano
* 10/05/2015
*/

#include <stdio.h> /* getchar EOF feof perror printf */
#include <stdlib.h> /* EXIT_SUCCESS */

int main(void) {
	int nl; /* la cantidad de lineas */
	int nc; /* la cantidad de caracteres */
	int c; /* el caracter leido */

	for(nl = 0, nc = 0; ( c = getchar()) != EOF;){
		if(c == '\n')
			++nl;
		else
			++nc;	
	}

	if( ferror(stdin) )
		perror("No se pudo seguir leyendo de la entrada debido a un error");
		

	nl==0 ? printf("Longitud promedio: %d\n", nc ) : printf("Longitud promedio: %.1f\n", nc / (float)nl );
	
	printf("Cantidad de caracteres: %d\n", nc );

	printf("Cantidad de nuevas lineas: %d\n", nl );
	
	return EXIT_SUCCESS;
}
