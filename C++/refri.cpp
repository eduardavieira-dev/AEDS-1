#include <iostream>
#include <string.h>
using namespace std;

class Refri{
  private:
    string ingredientes;
    float  preco;
    int acucar;

  public:
  //set e get
  void setIngredientes(string ingredientes){
    this->ingredientes = ingredientes;
  }
  void setPreco(float pr){
    preco = pr;
  }
  void setAcucar(int acucar){
    this->acucar = acucar;
  }
  string GetIngredientes(){
    return ingredientes;
  }
  float GetPreco(){
    return preco;
  }
  int GetQuant(){
    return acucar;
  }
  bool emEstoque ( )  {
    return
      (acucar > 0);
  }  
};

int main() { 
  Refri Coka;  
  Coka.setIngredientes("Agua, corante");
  Coka.setPreco(12.50);
  Coka.setAcucar(10);  
  cout << " Produto :  " << Coka.GetIngredientes()<< endl ;
  cout << " Preço :  " << Coka.GetPreco() << " \n " ;
  cout << " Estoque :  " << Coka.GetQuant() << " \n " ;

  if (Coka.emEstoque ( ))
    cout << " Produto em estoque . " << " \n " ;

    return 0;

}