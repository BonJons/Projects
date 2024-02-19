
// Jonathan Schnell
// N01566021
// Assignment 5B

#include <stdio.h>
#define MAX 15

int main(void) {


int array[MAX][MAX] = {};
int value = 0;
int num = 0;
int num2 = 1;

printf("What is the max operand value (max 15)?: ");
  scanf("%d", &value);
printf("\n");

for (int ii = 0; ii < value; ii++){
  for (int jj = 0; jj < value; jj++){
    if (ii == 0){
      array[ii][jj] = num + 1;
      num+=1;}
    
    else if (jj == 0){
      array[ii][jj] = num2 + 1;
      num2+=1;}
    
    else{
      array[ii][jj] = array[ii][0] * array[0][jj]; }
      }
                                  }

for (int i = 0; i < value; i++){
  for (int j = 0; j <= value; j++){
      if (j < value) {
         printf("%3d ", array[i][j]);}
      else{
        printf("\n");}
    }
                                  }


  return 0;
}