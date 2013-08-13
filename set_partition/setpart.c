/**
Hannah Aizenman
10/13/2013

Set Partition Solution
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>

#define MAX_P 2
//all numbers are smaller than 10^8
#define MAXLINE 8

int file2array(char filename[], int set[]);

int main(){

  //open subset file
  char filename[15];
  int i;
  
  for(i = 1; i<MAX_P; i++){
    int setlen = pow(10,i);
    int set[setlen];
    sprintf(filename, "sets/p%d.txt", i);
    printf("%s: %d elements\n", filename, setlen);
    file2array(filename, set);
  }

  //call partition function

  //assert that sort(Union(partitions))==sort(file)
  
  return 0;
}

//will probably end up incorporated into the partition function
int file2array(char *filename, int set[]){
  FILE *fp;
  char * line = NULL;
  size_t maxlen = MAXLINE;
  int cline = 0;

  fp = fopen(filename, "r");
  
  if (fp==NULL){
    int errsv = errno;
    char error_message[32];
    sprintf(error_message, "Error opening %s", filename); 
    perror(error_message);
    return errsv;
  }
   
  while(getline(&line, &maxlen, fp)>0){
    set[cline] = atoi(line);
    cline++;
  }
  fclose(fp);
  return 0;
}
