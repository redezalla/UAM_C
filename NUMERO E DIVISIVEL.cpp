#include <stdio.h>
int main (void)
{
int numero;
scanf("%d",&numero);
if (((numero % 5)==0) && ((numero % 3)==0)){
printf("O NUMERO E DIVISIVEL POR 5 E 3\n");
}
else{
printf("O NUMERO NAO E DIVISIVEL PO 5 E 3 \n");
}
return 0;
}
