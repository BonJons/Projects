// Jonathan Schnell
// N01566021
// Assignment 8A

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int numnums;  
float sum = 0;
float avg;
float minimum;
float maximum;
float thresh;

printf("How many numbers are you entering?: ");
  scanf("%d", &numnums);

  printf("\n");

float *numarray = (float*) calloc(numnums, sizeof(float));

for (int i = 0; i < numnums; i++)
  {
    scanf("%f", &numarray[i]);
  }


for (int j = 0; j < numnums; j++)
  {
    sum+=numarray[j];
  }
avg = sum / (float)numnums;

  
float hold = numarray[0];

for (int i = 0; i < numnums; i++)
  {
    if (numarray[i] < hold)
    {
      hold = numarray[i];
    }
  }
minimum = hold;

float hold2 = numarray[0];  

for (int p = 0; p < numnums; p++)
  {
    if (numarray[p] > hold2)
    {
      hold2 = numarray[p];
    }
  }

maximum = hold2;

printf("The minimum value is: %.2f\n", minimum);
printf("The maximum value is: %.2f\n", maximum);
printf("The average of the %d values is: %.2f\n", numnums, avg);

printf("Please enter a threshold value: ");
scanf("%f", &thresh);

printf("\n");


int above = 0;
int below = 0;

for (int ii = 0; ii <= numnums;ii++)
  {
    if (numarray[ii] < thresh)
    {
      below++;
    }
    else if (numarray[ii] > thresh)
    {
      above++;
    }
  }
  
  float *abovearray = (float*) calloc(above, sizeof(float));
  float *belowarray = (float*) calloc(below, sizeof(float));


  int lowerCounter = 0;
  for (int ii = 0; ii < numnums;ii++)
  {
    if (numarray[ii] <= thresh)
    {
      belowarray[lowerCounter] = numarray[ii];
      lowerCounter++;
    }
  }
  int upperCounter = 0;
  for (int i = 0; i < numnums; i++)
    {
  if (numarray[i] > thresh)
    {
      abovearray[upperCounter] = numarray[i];
      upperCounter++;
    }
  }

printf("The values above the threshold are: ");

  for (int jj = 0; jj < above; jj++)
    {
      printf("%.2f ", abovearray[jj]);
    }

  printf("\n");

printf("The values below the threshold are: ");

  for (int jj = 0; jj < below; jj++)
  {
    printf("%.2f ", belowarray[jj]);
  }

  
  free(abovearray);
  free(belowarray);
  free(numarray);
  return 0;
}