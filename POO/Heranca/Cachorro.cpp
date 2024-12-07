#include "Cachorro.h"
// Construtor da classe Dog
Cachorro::Cachorro(string n) : Animal(n) {}
// Método sobrescrito para emitir som específico de cachorro (polimorfismo)
void Cachorro::som() {
cout << nome << " diz: Au!Au!" << endl;
}
// Método exclusivo para buscar a bola
void Cachorro::buscar() {
cout << nome << " esta pegando a bola!" << endl;
}