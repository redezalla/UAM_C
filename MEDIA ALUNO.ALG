Algoritmo "Media aluno"
// Disciplina   : [Linguagem e Lógica de Programação]
// Descrição   : algoritmo que leia o nome do aluno
// e verifique as notas para saber se ele está aprovado
// Autor(a)    : Rafael Sepulveda Zalla
// Data atual  : 13/02/2021
Var
// Seção de Declarações das variáveis
 nome: vetor [1..1] de caractere
 notas: vetor [1..1,1..4] de real
 media: vetor [1..1] de real
 x: inteiro
 y: inteiro
Inicio
// iniciar programa
   PARA x DE 1 ATE 1 FACA
        ESCREVA ("Digite o nome do Aluno numero" , x, " de 1:" )
        LEIA (nome[x])
   PARA y  DE 1 ATE 4 FACA
        ESCREVA ("Digite a nota" , y, " do Aluno(a)", nome[x],":")
        LEIA ( notas [x,y] )
        FIMPARA
  //Calculo da Media
   media[x] := (notas[x, 1] + notas[x, 2] + notas[x, 3] + notas[x, 4])/4
       ESCREVA ("VALOR DA MEDIA" , media[x])
    //Apresentação Resultados
   //PARA x DE 1 ATE 1 FACA

       se media[x] <= 4.99 entao
                 ESCREVAL ("O Aluno(a)",nome[x], " Foi Reprovado com as notas ",  notas[x, 1],notas[x, 2] , notas[x, 3] , notas[x, 4])
              INTERROMPA
        fimse
      se media[x]>= 7 entao
         ESCREVAL ("O Aluno(a)",nome[x]," foi Aprovado com as notas", notas[x, 1],notas[x, 2] , notas[x, 3] , notas[x, 4])

            sENAO  media[x] =5 ATE <=6.99  ENTAO
             ESCREVAL ("O Aluno(a)",nome[x], " fazer exame ",  notas[x, 1],notas[x, 2] , notas[x, 3] , notas[x, 4])

            fimse

    fimpara

FimAlgoritmo