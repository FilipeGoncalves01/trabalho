#include <stdio.h>
// optei por criar três loops aninhados com diferentes responsabilidade
// o primeiro loop aninhado mostra no terminal a tabela do jogo
// o segundo busca o valor 3 (navio) e imprime onde ele esta localizado em nossa matriz.
// o terceiro loop imprime a quantidade de navios no mar e quanto de mar existe no tabuleiro
int main(){

    // criação de vetor e matriz
char array[10]= {'A','B','C','D','E','F','G','H','I','J'};
int matriz[10][11]={

    {0,0,0,0,0,0,0,3,0,0,0 },
    {1,0,0,0,0,3,3,3,3,3,0 },
    {2,0,0,0,0,0,0,3,0,0,0 },
    {3,0,0,0,0,0,0,0,0,0,0 },
    {4,0,0,0,0,0,0,0,0,0,0 },
    {5,0,0,0,0,0,0,0,0,0,0 },
    {6,0,0,0,0,0,0,0,0,0,0 },
    {7,0,3,0,0,0,0,0,3,0,0 },
    {8,3,3,3,0,0,0,3,3,3,0 },
    {9,3,3,0,0,0,3,3,3,3,3 }
    
    };
 
    //impreção do vetor
    printf("     BATALHA NAVAL\n");
    printf("  %c %c %c %c %c %c %c %c %c %c\n",array[0], array[1], array[2], array[3], array[4], array[5], array[6] , array[7], array[8], array[9] );
// iniciando o primeiro loop para a impreção do tabuleiro
for (int i = 0; i < 10;i++){
for ( int j = 0; j < 11; j++)
{     
        printf("%d ", matriz[i][j]);
       
     }
     printf("\n");

}
printf("\n");

//criando o nosso localizador (alvo)
int target= 3;
//iniciando o segundo loop aninhados para achar as posições do navio 
for (int i = 0; i < 10;i++){
    for ( int j = 1; j < 11; j++)
    {     
          if (matriz[i][j] == target)
          {
            printf("%d encontrado na area :( %d %d )\n", target,i,j);
          }
          
           
         }
        
}


// areas afetas = quantidade de navios e areas não afetadas = a quantidade de mar que temos no tabuiro
 int areasafetadas =0;
int areasnaoafeatas= 0;
//iniciando loop para saber a quantidade de navios e mar temos no tabuleiro 
for (int i = 0; i < 10;i++){


    for ( int j = 1; j < 11; j++)
    {     
          if (matriz[i][j] == target)
          {
           areasafetadas++;
        
          } else if (matriz!= target)
          {
            areasnaoafeatas++;
          }
}
} 
printf("\n");
printf("Navios no tabuleiro = %d\n", areasafetadas);
printf("quantidade de mar no tabuleiro= %d\n\n\n", areasnaoafeatas);

// Fimmm
}

