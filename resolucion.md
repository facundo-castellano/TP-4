/* Resolución de preguntas TP-4
*por Facundo Castellano
*10-05-2015
*/

1. La primer expresion de la sentencia *for* de la función *main* inicializa la variable `nl` y `nc` en 0.
En esta expresión, la coma (*,*) es un operador binario que implica un orden en la evaluación de condiciones.
Otra expresión equivalente existente sería: `nl=nc=0`.
2. Los *()* para la expresión `c=getchar()` son necesarios ya que establece que primero se guarde un caracter en la variable *c*, y que éste sea distinto a `EOF`.
Si no usamos *()* establecería que el resultado de `getchar() != EOF` se guarde en la variable *c*.
3.    * Semántica: Verifica que `!feof(stdin)` sea = 1. En el caso de que esto sea verdadero, invoca a la función *Perror* con argumento *"Error!"*.
	* Pragmática: Evalúa si terminó con error o no.
4. La funcion *perror* emite un mensaje por *stderr*
5. 	*`feof`: Continuar hasta que sea fin del archivo o tenga un error.
	*`ferror`: Continuar hasta que tenga un error.
	*Las expreciones `!feof(stfin)` y `ferror(stdin)` no son mutuamente excluyentes ya que un flujo puede tener 3 estados, estado erróneo, estado de lectura y estado de fin.
	* En este programa programa, si la expresión `ferror(stdin)` es verdadera , se invoca la función `perror`.
6. El formato *%.1f*, especifica el numero de dígitos después del punto decimal de un valor de punto flotante, en este caso 1. 
7. Se aplica un *casteo* porque al ser una division, es necesario castearlo a *float* para obtener un resultado con mayor precisión.
8. 
9. 
10. No, ya que este programa no considera la opción *vacio*.
11. No, no es precisa ya que cuenta el salto de linea `\n`.
12. Reemplazar lo que ejecuta if por: 
    ```
    printf("%.1f\t %d\t %d\n", nc/(float)nl, nl, nc);
    ```
