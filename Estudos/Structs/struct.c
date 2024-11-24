
#include <stdio.h>
#include <stdlib.h>
#define TAM 3
typedef struct Data{
    int dia;
    int mes;
    int ano;
} Data;
typedef struct Empregado{
Data dtanasc;
int mat;
char nome[250];
float salario;
} Empregado;
int main()
{
Empregado Emp[TAM];
int i;
for(i=0;i<TAM; i++)
{
printf("\nCadastro Empregado: ");
printf("\nData de nascimento - dia: ");
scanf("%d", &Emp[i].dtanasc.dia);
printf("\nData de nascimento - mes: ");
scanf("%d", &Emp[i].dtanasc.mes);
printf("\nData de nascimento - ano: ");
scanf("%d", &Emp[i].dtanasc.ano);
Emp[i].mat = (i+1);
printf("\nDigite o nome: ");
gets(Emp[i].nome);
gets(Emp[i].nome);
printf("\nDigite o salario: ");
scanf("%f", &Emp[i].salario);
}

for(i=0;i<TAM; i++)
{
printf("\n\n*****************");
printf("\nEmpregado: %s Matricula:%d", Emp[i].nome, Emp[i].mat);
printf("\nData de nascimento: %d / %d / %d ",Emp[i].dtanasc.dia, Emp[i].dtanasc.mes,
Emp[i].dtanasc.ano);
printf("\nSalario: %.2f", Emp[i].salario);
}
return 0;
}