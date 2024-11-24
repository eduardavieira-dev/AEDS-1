#include<iostream>
#include <string.h>
#include "Carro.h"

using namespace std;

Carro::Carro(int ano, float valor, int km){
  this->ano = ano;
  this->valor = valor;
  this->km = km;
}

void Carro:: setAno(int ano){
  this->ano = ano;
}

void Carro::setValor(float valor){
  this->valor = valor;
}
void Carro::setKm(int km){
  this->km = km;
}
int Carro::getAno(){
  return ano;
}
float Carro::getValor(){
  return valor;
}
int Carro::getKm(){
  return km;
}
void Carro::imprime(){
  cout << "Ano: " << ano << endl;
  cout << "Valor: " << valor << endl;
  cout << "Km: " <<km<<endl;
}