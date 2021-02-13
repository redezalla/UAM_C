//RAFAEL SEPULVEDA ZALLA
//Este é o estilo de strings usado pela linguagem C
// pura. Para manipular este tipo de string é preciso ter certo cuidado,
//  pois a matriz sempre tem um tamanho definido
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;
using std::getline;


int main(){
  string anyWord;

  cout << "Digite uma palavra: ";
  getline(cin, anyWord);

  for ( int i = 0; i < anyWord.length(); i++)
    cout << anyWord[i] << " - " << (int)anyWord[i] << endl;
  cout << endl;

  return 0;

}
