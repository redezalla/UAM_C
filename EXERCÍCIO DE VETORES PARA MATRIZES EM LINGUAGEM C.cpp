#include <stdio.h>
main()
{
int index;
char frase[30];

printf("\n\nEntre com a frase (max 30 caracteres): ");
gets(frase);
for (index =0 ; frase[index] != '\0'; index++)
{
   switch(frase[index])
   {
     case '\t':
            frase[index] = '\n';   
            break;
     case ' ':
            frase[index] = '\n';   
            break;
   }
}
printf("\n\nNova frase: \n%s", frase);
return 0;
}
