// Jonathan Schnell
// N01566021
// Assignment 7

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

int main(void) {

  FILE *pFile;
  char msg[MAX][MAX];
  int libraryNum;
  int forbiddenNum;
  int messageNum;
  char library[MAX][MAX];
  char forbidden[MAX][MAX];
  char am_pm[3];
  int hour;
  int minutes;
  int seconds;
  int numOfstr;

  
  
  pFile = fopen("textmsg2.txt", "r");

  if (pFile == NULL) {
    printf("FiLe NoT f0uNd BrAh");
    return 1;
  }

  fscanf(pFile, "%d", &libraryNum);
  for (int i = 0; i < libraryNum; i++)
    {
      fscanf(pFile, "%s", library[i]);
    }

  fscanf(pFile, "%d", &forbiddenNum);
  for (int i = 0; i < forbiddenNum; i++)
    {
      fscanf(pFile, "%s", forbidden[i]);
    }

  
  fscanf(pFile, "%d", &messageNum);

  
int messageCounter = 1;
  for (int ii = 0; ii < messageNum; ii++)
    {
      fscanf(pFile, "%d:%d %2s", &hour, &minutes, am_pm);
      fscanf(pFile, "%d", &numOfstr);
      for (int jj = 0; jj < numOfstr; jj++)
        {
          fscanf(pFile, "%s", msg[jj]);
        }
      char holdStrings[MAX][MAX];
      for (int j = 0; j < numOfstr; j++)
        {
          strcpy(holdStrings[j], msg[j]);
          for (int k = 0; k < strlen(holdStrings[j]); k++)
            {
          holdStrings[j][k] = tolower(holdStrings[j][k]);
            }
        }
      if (strcmp(am_pm, "AM") == 0)
      {
        if (hour < 7 && hour >= 1)
        {
          int catch = 1;
          for (int t = 0; t <= numOfstr; t++)
            {
              
              for (int g = 0; g <= forbiddenNum; g++)
                {
                  if (strcmp(holdStrings[t], forbidden[g]) == 0)
                  {
                    printf("Message #%d: FAILED TO SEND.\n\n", messageCounter);
                    catch = 0;
                    messageCounter++;
                    break;
                  }
                }
              if (t == numOfstr && catch ==1)
              {
                printf("Message #%d: ", messageCounter);
                for (int jj = 0; jj < numOfstr; jj++)
                {
                  printf("%s ", msg[jj]);
                }
                messageCounter++;
                printf("\n\n");
              }
              if (strcmp(holdStrings[t], "i") == 0 && strcmp(holdStrings[t+1], "love") == 0 && strcmp(holdStrings[t+2], "you") == 0)
              {
                printf("Message #%d: FAILED TO SEND.\n\n", messageCounter);
                catch = 0;
                messageCounter++;
                break;
              }
            }
          
        }
        if (hour == 7)
        {
          printf("Message #%d: ", messageCounter);
          for (int jj = 0; jj < numOfstr; jj++)
          {
            printf("%s ", msg[jj]);
          }
          messageCounter++;
          printf("\n\n");
        }
      }
    else if (strcmp(am_pm, "PM") == 0)
    {
      printf("Message #%d: ", messageCounter);
      for (int jj = 0; jj < numOfstr; jj++)
      {
        printf("%s ", msg[jj]);
      }
      messageCounter++;
      printf("\n\n");
    }
    else 
    {
      printf("Message #%d: ", messageCounter);
      for (int jj = 0; jj < numOfstr; jj++)
      {
        printf("%s ", msg[jj]);
      }
      printf("\n\n");
    }
      
    }


  fclose(pFile);

  return 0;
}

/*
  printf("%d:%d %s\n", hour, minutes, am_pm);
  printf("%d\n", numOfstr);
 printf("%s", msg[2]);
  printf("%d", messageCounter);
*/

//printf("%s \n", holdStrings[j]);

/*
  printf("%d ", libraryNum);
  printf("%d ", forbiddenNum);
  printf("%d ", messageNum);
*/

/*
for (int j = 0; j < forbiddenNum; j++)
  {
    printf("%s ", forbidden[j]);
  }
*/

/*
  for (int j = 0; j < libraryNum; j++)
    {
      printf("%s ", library[j]);
    }
*/
