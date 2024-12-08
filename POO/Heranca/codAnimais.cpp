#include <iostream>
#include <string>

using namespace std;

// Classe base (Animal)
class Animal {
protected:
    string nome; // Nome do animal

public:
    // Construtor
    Animal(string n) : nome(n) {}

    // Método para emitir som (pode ser sobrescrito por classes derivadas)
    virtual void som() {
        cout << nome << " esta fazendo barulho" << endl;
    }

    // Método para exibir o nome do animal
    void mostraNome() {
        cout << "Este eh o " << nome << "." << endl;
    }

    // Método para comer
    void comer() {
        cout << nome << " esta comendo." << endl;
    }

    // Método para dormir
    void dormir() {
        cout << nome << " esta dormindo." << endl;
    }
};

// Classe derivada (Cachorro)
class Cachorro : public Animal {
public:
    // Construtor da classe derivada (utiliza o construtor da classe base)
    Cachorro(string n) : Animal(n) {}

    // Construtor sem parâmetros (opcional, para criar objetos sem nome inicial)
    Cachorro() : Animal("Cachorro") {}

    // Método sobrescrito para emitir som específico de cachorro
    void som() override {
        cout << nome << " diz: Au!Au!" << endl;
    }

    // Método exclusivo da classe Cachorro
    void buscar() {
        cout << nome << " esta pegando a bola!" << endl;
    }
};

// Classe derivada (Gato)
class Gato : public Animal {
public:
    // Construtor da classe derivada (utiliza o construtor da classe base)
    Gato(string n) : Animal(n) {}

    // Construtor sem parâmetros (opcional, para criar objetos sem nome inicial)
   // Gato() : Animal("Gato") {}

    // Método sobrescrito para emitir som específico de gato
    void som() override {
        cout << nome << " diz: Miau!" << endl;
    }

    // Método exclusivo da classe Gato
    void escalar() {
        cout << nome << " esta escalando uma arvore!" << endl;
    }
};

int main() {
    // Criando um objeto da classe base (Animal)
    Animal animalGenerico("Animal Generico");
    animalGenerico.mostraNome(); // Mostra o nome do animal genérico
    animalGenerico.som();        // Chama o método som da classe base
    animalGenerico.comer();      // Chama o método comer
    animalGenerico.dormir();     // Chama o método dormir

    cout << endl;

    // Criando um objeto da classe derivada (Cachorro)
    Cachorro meuCachorro("Buddy");
    meuCachorro.mostraNome(); // Mostra o nome do cachorro
    meuCachorro.som();        // Chama o método sobrescrito na classe derivada
    meuCachorro.buscar();     // Chama o método exclusivo da classe derivada
    meuCachorro.comer();      // Chama o método comer herdado
    meuCachorro.dormir();     // Chama o método dormir herdado

    cout << endl;

    // Criando um objeto da classe derivada (Gato)
    Gato meuGato("Whiskers");
    meuGato.mostraNome(); // Mostra o nome do gato
    meuGato.som();        // Chama o método sobrescrito na classe derivada
    meuGato.escalar();    // Chama o método exclusivo da classe derivada
    meuGato.comer();      // Chama o método comer herdado
    meuGato.dormir();     // Chama o método dormir herdado

    return 0;
}
