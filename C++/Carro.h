class Carro{
  private:
    int ano;
    float valor;
    int km;

  public:
  //Voce pode apenas assinar aqui quais funcoes poderao ser chamadas na main e desenvolver elas em outros arquivos
    Carro(int ano, float valor, int km);
    void setAno(int ano);
    void setValor(float valor);
    void setKm(int km);
    int getAno();
    float getValor();
    int getKm();
    void imprime();
};


