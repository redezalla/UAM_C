Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]

// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : RAFAL SEPULVEDA ZALLA
// Data atual  : 12/02/2021


// algoritmo "media_aluno"
// var
// n1, n2, n3, n4 : inteiro
// media: real
// aluno : caracter
// inicio
// escreva ("Digite o nome do aluno: ")
// leia (aluno)
// escreva ("Digite a Primeira nota: ")
// leia (n1)
// escreva ("Digite a Segunda nota : ")
// leia (n2)
// escreva ("Digite a Terceira nota: ")
// leia (n3)
// escreva ("Digite a Quarta nota : ")
// leia (n4)
// media <= (n1 + n2+ n3 + n4) / 4
// escreva ("A m�dia final �: ", media)
// se media <- 6 entao
// Escreva (" O aluno ",aluno, " passou !")
// senao
// escreva (" O aluno ",aluno, " reprovou")
// fimse
// fimalgoritmo

//CORRE��O

// algoritmo "media_aluno"
 var

  n1, n2, n3, n4 : inteiro

  media: real

  aluno : caracter

inicio

  escreva ("Digite o nome do aluno: ")

  leia (aluno)

  escreva ("Digite a Primeira nota: ")

  leia (n1)

  escreva ("Digite a Segunda nota : ")

  leia (n2)

  escreva ("Digite a Terceira nota: ")

  leia (n3)

  escreva ("Digite a Quarta nota  : ")

  leia (n4)

  media <- (n1 + n2+ n3 + n4) / 4

  escreva ("A m�dia final �: ", media)

  se media >= 6 entao

  Escreva (" O aluno ",aluno, " passou !")

  senao

  escreva (" O aluno ",aluno, " reprovou")

  fimse

fimalgoritmo