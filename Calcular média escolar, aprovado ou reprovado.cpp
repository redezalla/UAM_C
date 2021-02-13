#include <stdio.h>
#include <stdlib.h>
#define TAM 3
#define MAX 50 


typedef struct MediaAluno{    
	char nome[MAX];
	double vetnotas[TAM];
	double media;
}MediaAluno;


double IserirDados(MediaAluno* n1,MediaAluno* n2,MediaAluno* n3,MediaAluno* n);
double ProcessaDados(MediaAluno* n1,MediaAluno* n2,MediaAluno* n3,MediaAluno* m);
void  ExibirDados(MediaAluno* n1,MediaAluno* n2,MediaAluno* n3,MediaAluno* m,MediaAluno* n);


double IserirDados(MediaAluno* n1,MediaAluno* n2,MediaAluno* n3,MediaAluno* n){    
	   int i=0;
	   for(i=0;i<3;i++){
           printf("\nDigite seu nome: ");
           gets(n->nome);
           printf("\nDigite a nota 1: ");                 
		   scanf("\n%lf",&n1->vetnotas[i]);
           printf("\nDigite a nota 2: ");      		  
		   scanf("\n%lf",&n2->vetnotas[i]);	
           printf("\nDigite a nota 3: ");      	   
	       scanf("\n%lf",&n3->vetnotas[i]);
	       return n->nome,n1->vetnotas[i], n2->vetnotas[i], n3->vetnotas[i];
           printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  
	   }


}

double ProcessaDados(MediaAluno* n1,MediaAluno* n2,MediaAluno* n3,MediaAluno* m ){
       int i;       
       for(i=0;i<3;i++){	 
	       m->media = (n1->vetnotas[i] + n2->vetnotas[i] + n3->vetnotas[i])/3;
         
	       if(m->media>=7)
		      return m->media;
	        else
		      return m->media;	  
     }
}

void  ExibirDados(MediaAluno* n1,MediaAluno* n2,MediaAluno* n3,MediaAluno* m,MediaAluno* n){        
      int i;            
	   if(m->media>=7)             
		  printf("\n\tNome\tNota1\tNota2\tNota3\tMedia\tAluno Aprovado \n\t%s %.1lf \t%.1lf \t%.1lf \t%.1lf \t%.1lf\n\n\n",n->nome,n1->vetnotas[i],n2->vetnotas[i],n3->vetnotas[i],m->media,m->media);		  
	    else	    
	   	  printf("\n\tNome\tNota1\tNota2\tNota3\tMedia\tAluno Reprovado \n\t%s %.1lf \t%.1lf \t%.1lf \t%.1lf \t%.1lf\n\n\n",n->nome,n1->vetnotas[i],n2->vetnotas[i],n3->vetnotas[i],m->media,m->media);
	      system("pause");
	   }


int main(){
	MediaAluno n,n1,n2,n3,m;    
	IserirDados(&n1,&n2,&n3,&n);
	ProcessaDados(&n1,&n2,&n3,&m);
	ExibirDados(&n1,&n2,&n3,&m,&n);
  
}
