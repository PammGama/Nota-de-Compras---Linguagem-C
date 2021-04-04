// 04 de abril de 2021
// Programa criado com intuito de testar minha memória sobre a linguagem C. desfio e dúvidas tiradas do site https://www.inf.pucrs.br/~pinho/LaproI/IntroC/IntroC.htm

#include <stdio.h> // inclui a biblioteca principal

int main(void) // função principal
  {
    // definição das variáveis (int inteiro, float real, char caracteres)
    float precounitbanana, precounituva, precounitpessego;
    float precobanana, precouva, precopessego;
    float subtotal, TOTAL;
    int quantidbanana, quantiduva, quantidpessego;
    char Banana[30], Uva[30], Pêssego[30];

        // atribuindo valores as variáveis
        quantidbanana = 2;
        precounitbanana = 2.5;
        precobanana = quantidbanana*precounitbanana; // multiplicação
        
        quantiduva = 6;
        precounituva = 6.5;
        precouva = quantiduva*precounituva;

        quantidpessego = 10;
        precounitpessego = 10.22;
        precopessego = quantidpessego*precounitpessego; 

        subtotal = precobanana+precouva+precopessego;

        TOTAL = (subtotal*0.05)+subtotal;

      printf("Banana: quantidade %d2, preço unitário %f, valor final %f\n", quantidbanana, precounitbanana, precobanana);  

      printf("Uva: quantidade %d2, preço unitário %f, valor final %f\n", quantiduva, precounituva, precouva);

      printf("Banana: quantidade %d2, preço unitário %f, valor final %f\n", quantidpessego, precounitpessego, precopessego);  

      printf("%-f Subtotal\n", subtotal);   

      printf("%-f TOTAL\n", TOTAL);  
  }
