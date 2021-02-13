#include <stdio.h>
#define MAX 31

void main()
{
char str[MAX], copia[MAX];
int i, compstr;

printf("\n\nEntre com uma string (max 30 caracteres): ");
gets(str);

/* Determina o comprimento da string atraves
   de um for sem conteudo : ao final dele, compstr
   contem a posicao do '\0' da string*/

for(compstr=0; str[compstr]; compstr++);
 
/* Inverte a string */

for(i=0; str[i]; i++)
{
   copia[i] = str[compstr-i-1];   /* Linha em destaque */
}
copia[i] = '\0';                                         /* coloca um finalizador na string */
printf("\n\nString Invertida: %s\n", copia);
}
