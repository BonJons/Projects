
//  Jonathan Schnell
//  N01566021
//  Assignment 6A

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 50

int main(void) {
char input_str[MAX];
char upper_input[MAX];

int chars = 0;
int nums = 0;
int punctuations = 0;

  
printf("Please enter an input string: \n");
  fgets(input_str, MAX , stdin);

printf("The string in upper case is: ");

        for (int i = 0; i < strlen(input_str); i++)
          {
            printf("%c", toupper(input_str[i]));
          }

printf("The string in lower case is: ");

        for (int i = 0; i < strlen(input_str); i++)
          {
            printf("%c", tolower(input_str[i]));
          }

printf("The string in spongebob case is: ");

        for (int i = 0; i < strlen(input_str); i++)
        {
          if (i % 2 != 0)
          {
          printf("%c", toupper(input_str[i]));
          }
          else
          {
            printf("%c", tolower(input_str[i]));
          }
        }

    for (int i = 0; i < strlen(input_str); i++)
      {
        if (isalpha(input_str[i]))
        {
          chars++;
        }
         
        else if(isdigit(input_str[i]))
        {
          nums++;
        }
        else if (ispunct(input_str[i]))
        {
          punctuations++;
        }
      }



  printf("The string contains %d letters, %d digits, and %d punctuation characters.", chars, nums, punctuations);
          






  
  return 0;
}