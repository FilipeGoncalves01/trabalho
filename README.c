#include <stdio.h>
 
int main() {
    

    char Array [10]= {'A','B','C','D','E','F','G','H','I','J'};
    int i, j, index ;
    int matriz[10][10] = {
    {0,0,3,3,3,0,0,0,0,0},
    {0,0,0,0,0,0,3,0,0,0},
    {0,0,0,0,0,0,3,0,0,0},
    {0,0,0,0,0,0,3,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,3,0,0,0,0,3,0,0},
    {0,3,0,0,0,0,0,0,3,0},
    {3,0,0,0,0,0,0,0,0,3}

    };

    printf("  %c %c %c %c %c %c %c %c %c %c\n", Array[0], Array[1], Array[2], Array[3], Array[4], Array[5], Array[6], Array[7], Array[8], Array[9]);
    for ( i = 0; i <= 10; i++)
    {
       index = i;
      
         printf("%d %d %d %d %d %d %d %d %d %d %d\n", i, matriz[index][0], matriz[index][1], matriz[index][2], matriz[index][3], matriz[index][4], matriz[index][5], matriz[index][6], matriz[index][7], matriz[index][8], matriz[index][9] );
    
         
    }
    


}
