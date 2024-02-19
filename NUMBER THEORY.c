#include <stdio.h>
#include <math.h>

// Jonathan Schnell
// N01566021
// Assignment 4A

//function to determine if prime
int isPrime(num){
  for (int i = 2; i < num; i++){
    if (num % i ==0){
      return 0;
    }}
  return 1;}

//factorial function
int fact(num){
  for(int j = num; j > 1; j--){
  num = num * (j-1);
  }
  return num;}

int main(void){
int num;

printf("Please enter a number: \n");
  scanf("%d", &num);

  printf("The Fibonacci sequence up to %d is: 0, 1, ", num);

  int i = 0;
  int j = 1;
  int next = i + j;
//fibonacci loop
  while(next <= num){
    printf("%d", next);
    i = j;
    j = next;
    next = i + j;
    if(next > num){
      break;}
    else{
      printf(", ");
    }
    }
printf("\n");
  
printf("All prime numbers up to %d are: 2, ", num);
  
for(int i = 3; i <= num; i++){
  if(isPrime(i) == 1){
    printf("%d", i);
  }
//next if statment used to properly print "," to match expected result without printing extra commas
  if(isPrime(i+1) == 1 && (i+1) <= num){
    printf(", ");
  }
}

printf("\n");

printf("The value of %d! is: ", num);  
  
printf("%d", fact(num));

return 0;

}