//  Jonathan Schnell
//  N01566021
//  Assignment 6B

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX 50


int main(void) {
int stringCount;
char elements[MAX][MAX];


int comp = 0;



printf("How many strings will you enter?: \n");
  scanf("%d", &stringCount);

for (int ii = 0; ii <= stringCount; ii++)
  {
    fgets(elements[ii], MAX, stdin);
  }

for (int jj = 0; jj <= stringCount; jj++)
  {
    if(strcmp(elements[jj],elements[jj+1]) >= 0)
    {
      comp++;
    }
    else if(strcmp(elements[jj],elements[jj+1]) <= 0)
    {
      comp--;
    }
  }

if (comp == stringCount - 1)
{
  printf("The strings are in descending order");
}
else if (comp == 1 - stringCount)
{
  printf("The strings are in ascending order");
}
else if (comp != 1 - stringCount && comp != stringCount - 1)
{
  printf("The strings are in neither descending or ascending order. \n");
}


  
  return 0;
}

